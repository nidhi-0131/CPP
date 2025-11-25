#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a >> b>> c;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "Max = " << max;
    return 0;
}