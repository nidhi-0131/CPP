#include <iostream>
using namespace std;

// waf to print nth fibonacci

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int num;
    cin >> num;
    fibonacci(num);
    return 0;
}