#include <iostream>
using namespace std;

// parameters
// function for sum of two numbers

int sum(int, int);

int sum(int n1, int n2) {
    int s = n1 + n2;
    return s;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "sum = " << sum(num1, num2) << endl;
    cout << sum (10, 5);
    return 0;
}