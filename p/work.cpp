#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
        cout << "not eligible to work";
    else if (age <=57)
        cout << "eligible to work";
        if (age >= 55)
            cout << ", but retirement soon";
    else
        cout << "eligible to work";
    return 0;
}