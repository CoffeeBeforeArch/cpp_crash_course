// This program shows off the basics of exceptions in C++
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <stdexcept>

using namespace std;

int divide(const int x, const int y){
    if(y == 0){
        // Throw in case of divide by 0 runtime error
        // Throw returns a runtime_error object
        throw runtime_error("You tried to divide by 0!");
    }
    return x / y;
}

void allocate(int x, int **arrPtr){
    // Check for problems with calling divide(...) here
    try{
        arrPtr = new int*[divide(5, x)];
    } catch(runtime_error &error){
        cerr << "Caught division error: " << error.what() << endl;
    }
}

int main(){
    // Declare some variables to pass to our functions
    int a = -1;
    int **array;

    // Check for problems with memory allocation here
    try{
        allocate(a, array);
    } catch(bad_alloc &error){
        cerr << "Failed to allocate memory using new" << endl;
    }

    // Program still continues
    cout << "Still executes code following an exception" << endl;
    return 0;
}
