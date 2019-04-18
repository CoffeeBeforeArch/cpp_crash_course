// This program shows off the basics of unions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

struct various_data{
    // 1 Byte
    char a;
    // 4 Bytes
    int b;
    // 4 Bytes
    float c;
    // 8 Bytes
    double d;
};

union union_test{
    various_data union_struct;
    int union_int;
    float union_float;
    double union_double;
};

int main(){
    // Create a struct and initialze it
    various_data v_data;
    v_data.a = 'a';
    v_data.b = 24;
    v_data.c = 867.5309;
    v_data.d = 2001.1002;

    union_test ut_1;
    ut_1.union_struct = v_data;

    cout << "sizeof struct: " << sizeof(v_data) << " pointer: " << &ut_1.union_struct << endl;

    int b = 5;
    ut_1.b = b;
    return 0;
}
