#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int i;
    for (i=1; i<=n; i++)
    {
        int j, s;
        for (s=i; s<=n; s++)
            cout << " ";
        for (j=1; j<=i; j++)
            cout << j;
        for (j=i- 1; j>=1; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}