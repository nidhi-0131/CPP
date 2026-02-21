#include <iostream>
using namespace std;

// print all prime numbers from 2 to N

bool isPrime(int N) {
    if (N <= 1){
        return false;
    }
    for (int i = 2; i <= N - 1; i++) {
        if (N % i == 0) 
            return false;
    }
    return true;
}

int printPrime(int n) {
    for (int i=2; i<= n; i++) {
        if (isPrime(i) == true) {
            cout << i << " ";
        }
    }
    return 0;
}

int main() {
    int num;
    cin >> num;
    printPrime(num);
    return 0;
}