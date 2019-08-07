// This program shows off the basics of constexpr in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Simple struct with static constexpr members
// Must be static because it is constant in all structs
struct my_struct{
    static constexpr int ID = 5;
    static constexpr char WEIGHT[] = "26.7";
    static constexpr const char *c = &WEIGHT[0];

    // We can even have compile time checks
    static_assert(*c == '2', "Oops!");
};

// We can even have a recursive functions be calculated at compile time as well
constexpr int fibonacci(int i){
    return (i <= 1) ? 1 : fibonacci(i - 1) + fibonacci(i - 2);
}

int main(){
    // Let's make some constexpr variables
    constexpr int i = 5;
    constexpr int result = fibonacci(i);
    constexpr double d = 1.5;
    my_struct example;

    // And lets print them out
    cout << "i = " << i << endl;
    cout << "result = " << result << endl;
    cout << "d = " << d << endl;
    cout << "my_sturct ID = " << example.ID << endl;

    return 0;
}
