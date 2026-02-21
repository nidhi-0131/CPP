#include <iostream>
#include <cmath>
using namespace std;

// prime number function
/* 
    logic:
        a number is prime when from 2 to n - 1, n % i != 0
*/

bool isPrime(int num) {
    if (num <=1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "prime";
    else
        cout << "not prime";
}