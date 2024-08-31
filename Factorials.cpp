#include <iostream>
using namespace std;

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;  
    for (int i = 1; i <= n; ++i) {
        result *= i;                
    }
    return result;                 
}


unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;                  
    } else {
        return n * factorialRecursive(n - 1); 
    }
}

int main() {
    int number;

    
    cout << "Enter a non-negative integer: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;  
    }

    
    unsigned long long iterativeResult = factorialIterative(number);
    cout << "Iterative factorial of " << number << " is: " << iterativeResult << endl;

    
    unsigned long long recursiveResult = factorialRecursive(number);
    cout << "Recursive factorial of " << number << " is: " << recursiveResult << endl;

    return 0;
}
