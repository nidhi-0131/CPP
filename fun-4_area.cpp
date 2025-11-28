//WAP in C++ to find the area of circle using functions
#include <bits/stdc++.h>
using namespace std;
float area(float r)
{
    float A = 3.14*r*r;
    return (A);
}
int main()
{
    int radius;
    cout << "Enter the value of radius of the circle (in cm): ";
    cin >> radius;
    cout << "The area of the circle is " << area(radius) << " cm^2.";
    return 0;
}