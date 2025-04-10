//recursion

#include <iostream>
using namespace std;
 
int sum_of_n(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return n + sum_of_n(n - 1);
}
 
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
void fibonacci_series(int n) {
    for (int i = 0; i < n; i++) { // Fix: Use i < n to print n terms
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
 
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
 
    cout << "\nSum of first " << n << " natural numbers: " << sum_of_n(n);
    cout << "\nThe " << n << "th term in the Fibonacci sequence: " << fibonacci(n);
    cout << "\nFibonacci series up to " << n << " terms: ";
    fibonacci_series(n);
 
    return 0;
}