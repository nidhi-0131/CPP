#include <iostream>
using namespace std;

// nCr binomial coefficient for n & r
// can use long long instead of int since factorials can grow really fast, but since we don't need this code much we will keep the int to save memory

int factorial(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n/(fact_r * fact_nmr);
}

int main() {
    int n, r;
    cin >> n >> r;
    
    cout << n << "C" << r << " = " << nCr(n, r) << endl;

    return 0;
}