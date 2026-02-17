#include <bits/stdc++.h>
using namespace std;

int main() {

    // primitive datatypes
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;
    cout << "age = " << age << "\nand size = " << sizeof(age) << endl;
    cout << grade << "\n" << PI << "\n" << isSafe << "\n";

    // type casting: conversion
    int value = grade;
    cout << value << "\n";

    // type casting: casting
    double price = 100.99;
    cout << price;
    int newPrice = (int)price;
    cout << "\n" << newPrice << endl;

    // input value
    int height;
    cout << "enter your height: ";
    cin >> height;
    cout << "\nyour height = " << height << endl;

    // arithmetic operator
    int a = 5, b = 10;
    cout << "a = 5 & b = 10\nsum = " << a + b << "\ndifference = " << a - b << "\nproduct = " << a * b << "\nquotient = " << a / b << "\nmodulo = " << a % b << "\n";
    cout << "quotient after type-casting = " << (a / (double)b) << "\n";

    // relational operator
    cout << (a < b) << "\n" << (a > b) << "\n" << (a <= b) << "\n"  << (a >= b) << "\n" << (a == b) << "\n" << (a != b) << "\n";
    
    // logical operator
    cout << !(a < b) << "\n";
    cout << ((3 > 1) || (3 > 5)) << "\n" << ((3 > 1) && (3 > 5)) << "\n";

    // sum of two numbers
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "sum = " << (x + y) << endl;

    // unary operators
    cout << y++ << "\n" << ++x << "\n" << a-- << "\n" << --b << "/n";
    
    return 0;
}