#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if (num==0)
        return 1;
    else
        return num*fact(num-1);
}
int main ()
{
    int n;
    cin >> n;
    cout << "The factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}
//? not sure if this is right TT