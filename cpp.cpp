#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = rows - 1; i >= 0; i--) {
        // leading spaces (decrease each row)
        for (int s = 0; s < i; s++) {
            cout << "  ";
        }

        // stars
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "        1\n      1   3\n    1       5\n  1           7\n1 2 3 4 5 6 7 8 9\n";
    cout << "        *\n      *   *\n    *       *\n  *           *\n* * * * * * * * *";
    return 0;
}