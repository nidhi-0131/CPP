#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Take the age from user and decide accordingly.
    1. if age < 18
        print -> not eligible to work
    2. if age >= 18
        print -> eligible to work
    3. if age >= 55 and age <=57
        print -> eligible to work, but retirement soon
    4. if age > 57 
        print -> retirement time
    */
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
        if (age >= 55 && age <= 57)
            cout << "eligible to work, but retirement soon";
        else if (age > 57)
            cout << "retirement time";
        else
            cout << "eligible to work";
    else
        cout << "not eligible to work";
    return 0;
    // or
    /*
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
        cout << "not eligible to work";
    else if (age <=57)
        cout << "eligible to work";
        if (age >= 55)
            cout << ", retirement soon";
    else
        cout << "eligible to work";
    return 0;
    */
}