#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive case: calculate factorial recursively
    else
        return n * factorial(n - 1);
}

int main() {
    int n = 5;
    unsigned long long result = factorial(n);
    std::cout << "Factorial of " << n << " is " << result << std::endl;
    return 0;
}
