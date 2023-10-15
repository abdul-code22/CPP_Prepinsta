#include <iostream>
#include <vector>

void printPrimes(int n) {
    // Create a boolean array "isPrime[0..n]" and initialize all entries as true.
    // A value in isPrime[i] will finally be false if i is Not a prime, and true otherwise.
    std::vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p]) {
            // Update all multiples of p
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Print prime numbers
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n >= 2) {
        std::cout << "Prime numbers up to " << n << " are: ";
        printPrimes(n);
    } else {
        std::cout << "No prime numbers in the specified range." << std::endl;
    }

    return 0;
}
