#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    char op;
    cout << "What operator do you wish to use? (+, -, *, /, %): ";
    cin >> op;
    switch (op)
    {
        case '+':
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '*':
        cout << a * b;
        break;
        case '/':
        cout << a / b;
        break;
        case '%':
        cout << a % b;
        break;
        default:
        cout << "Invalid operator! Please try again.";
        break;
    }
    return 0;
}