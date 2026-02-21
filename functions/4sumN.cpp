#include <iostream>
using namespace std;

// sum of numbers from 1 to n

int sumN(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;
    cout << "sum = " << sumN(num);
    return 0;
}