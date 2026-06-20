// Take a number n from the user. Print all prime numbers from 2 to n.
//  (A prime number is only divisible by 1 and itself.)

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number n: ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << ":\n";

    // Outer loop: check each number from 2 to n
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;  // assume num is prime until we find a divisor

        // Inner loop: check if any number from 2 to num-1 divides num
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {   // num is divisible by i
                isPrime = false;  // so num is not prime
                break;            // no need to check further
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}