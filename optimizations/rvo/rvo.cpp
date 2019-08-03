// This program shows off the return value optimization in C++
// By: Nick from CoffeeBeforeArch

#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

struct MyString{
    string s;
    MyString(string s1) : s(s1) {}
    MyString(const MyString &s2){
        cout << "Copying the string!" << endl;
    }
};

MyString rvo(){
    MyString ms("Hey there!");
    return ms;
}

MyString no_rvo(int condition){
    MyString ms_1("Hey there!");
    MyString ms_2("Ahoy!");

    if(condition){
        return ms_1;
    }else{
        return ms_2;
    }
}

int main(){
    // Set the seed and set the condition to 1 or 0
    srand(time(NULL));
    int condition = rand() % 2;

    // Get the string with RVO
    MyString s1 = rvo();

    // Get the string without RVO
    MyString s2 = no_rvo(condition);

    // Print the strings
    cout << "String 1: " << s1.s << endl;
    cout << "String 2: " << s2.s << endl;
    
    return 0;
}
