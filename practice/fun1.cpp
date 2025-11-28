#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    cout << "The numbers are "<< a << ", and " << b << "." << endl;
    return (a+b);
}
int subtract(int c, int d)
{
    return c-d;
}
int multiply(int x, int y)
{
    return x*y;
}
double divide(double m, double n)
{
    return m/n;
}
void result()
{
    cout << "Thus, you have your result!" << endl;
}
int main()
{
    int sum, difference, product;
    double quotient;
    sum=add(101, 25);
    difference=subtract(101, 25);
    product=multiply(101, 25);
    quotient=divide(101, 25);
    cout << "Sum of the two numbers: " << sum << endl;
    cout << "Difference of the two numbers: " << difference << endl;
    cout << "Product of the two numbers: " << product << endl;
    cout << "Quotient of the two numbers: " << quotient << endl;
    result();
    return 0;
}