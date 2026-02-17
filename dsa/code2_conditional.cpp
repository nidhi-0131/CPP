#include <bits/stdc++.h>
using namespace std;

int main() {

    // conditional statements: positive or negative
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << n << "\n";
    if (n >= 0) {
        cout << "positive\n";
    } else {
        cout << "negative\n";
    }

    // odd or even
    if (n%2 == 0) {
        cout << "even\n";
    } else {
        cout << "odd\n";
    }

    // if-else if-else statement
    int marks;
    cout << "enter marks: ";
    cin >> marks;
    cout << "\nGrade = ";
    if (marks >= 90) {
        cout << "A";
    } else if (marks >= 78 && marks <90) {
        cout << "B";
    } else if (marks >= 60 && marks < 78) {
        cout << "C";
    } else if (marks >= 54 && marks < 60) {
        cout << "D";
    } else if (marks >= 33 && marks < 54) {
        cout << "E";
    } else {
        cout << "F";
    }

    // lowecase or uppercase? using >= or <=
    char l;
    cout << "enter letter: ";
    cin >> l;
    cout << "\nCharacter is in ";
    if (l >= 'a' && l <= 'z') {
        cout << "lowercase.";
    } else {
        cout << "uppercase.";
    }

    // lowercase or uppercase? using ASCII
    char ch;
    cout << "enter letter: ";
    cin >> ch;
    cout << "\nCharacter is in ";
    if (ch >= 65 && ch <= 90) {
        cout << "lowercase.";
    } else {
        cout << "uppercase.";
    }

    // ternary operator
    int num;
    cout << "enter number: ";
    cin >> num;
    cout << (n >= 0? "positive": "negative") << "\n";

    return 0;
}