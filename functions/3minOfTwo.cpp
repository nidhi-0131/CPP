#include <iostream>
using namespace std;

// min of 2 numbers

int minOfTwo(int n1, int n2) {
    if (n1 < n2)
        return n1;
    else
        return n2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "min = " << minOfTwo(num1, num2);
    return 0;
}