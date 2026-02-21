#include <iostream>
using namespace std;

// sum of digits of a number

int sumOfDigits(int num) {
    int digitSum = 0;
    while (num > 0) {
        int lastDigit;
        lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    int num;
    cin >> num;
    cout << "sum of digits of " << num << " = " << sumOfDigits(num) << endl;
    return 0;
}