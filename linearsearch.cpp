#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int key;
    cin >> key;
    int k = 0, loc = -1;
    while (loc == -1 && k < n) {
        if (a[k] == key) {
            loc = k;
        }
        k++;
    }
    cout << loc;
    return 0;
}