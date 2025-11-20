#include <bits/stdc++.h>
using namespace std;
int main ()
// Write a program to input the age of a person, and print if they are an adult or not.
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult.";
    }
    else 
    {
        cout << "You are not an adult.";
    }
    return 0;
}