// WAP Iin C++ to display one integer number and one float number using call by value
#include <bits/stdc++.h>
using namespace std;
void displayNum(int i, float f)
{
    cout << "The integer number is " << i << endl;
    cout << "The float number is " << f << endl;
}
int main()
{
    int num1;
    float num2;
    cout << "Enter an integer value: ";
    cin >> num1;
    cout << "Enter a float value: ";
    cin >> num2;
    cout << endl;
    displayNum(num1, num2);
    return 0;
}