// This program has recursive implementations of fibonacci and factorial
// By: Nick from CoffeeBeforeArch

#include <iostream>

using namespace std;

// Calculate factorial (assume positive number)
// e.g. 5! = 5 * 4 * 3 * 2 * 1 = 120
int factorial(int n){
    if(n <= 1){
        return 1;
    } else{
        return(n * factorial(n-1));
    }
}

// Print the nth digit the fibonacci sequence (assume positive number)
// e.g. for n = 5, fibonacci(5) = (n-2 + n-1) = 2 + 3 = 5
int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    } else{
        return(fibonacci(n-2) + fibonacci(n-1));
    }
}

int main(){
    // Initialize and delcare number of iterations
    int n_factorial = 5;
    int result_factorial;
    int n_fibonacci = 5;
    int result_fibonacci; 

    // Call factorial and fibonacci functions
    result_factorial = factorial(n_factorial);
    result_fibonacci = fibonacci(n_fibonacci);

    // Print results
    cout << n_factorial << "! = " << result_factorial << endl;
    cout << "The nth digit of fibonacci is "<< result_fibonacci << endl;

    return 0;
}
