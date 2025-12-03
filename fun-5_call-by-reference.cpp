#include <bits/stdc++.h>
using namespace std;
void swap(int &i, int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
    return;
}
int main ()
{
    int a=8;
    int b=9;
    cout << "Before swapping: " << a << ", " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << ", " << b << endl;
    return 0;
}