#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if (a > b && a > c)
        cout << a << ", a is largest.";
    else if (b > a && b > c)
        cout << b << ", b is largest.";
    else
        cout << c << ", c is largest.";
    return 0;
}