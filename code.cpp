#include <bits/stdc++.h>
using namespace std;
int main () {
    
    
    
    int n;
    cin >> n;
    int i, j;
    int num;
    cin >> num;
    for (i=1; i<=n; i++) {
        for (j=n; j>=i; j--) {
            cout << num << " ";
        }
        num--;
        cout << "\n";
    }
    return 0;
}