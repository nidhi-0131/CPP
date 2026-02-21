#include <iostream>
using namespace std;

// basic syntax

int printHello() {
    cout << "Hello\n";
    return 3;
}
int main() {
    printHello();
    string a="World";
    cout << " " << a << endl;
    
    int val = printHello();
    cout << val << endl;

    cout << printHello() << endl;
    return 0;
}