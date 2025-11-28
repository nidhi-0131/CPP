/*
Call-by address: used when you want to modify a variable inside and wants that modification 
persist outside the function.
Syntax:- 
    return_type function_name(*P)
    {
        // modification
    }
*/
#include <bits/stdc++.h>
using namespace std;
void changeValue(int *P)
{
    *P = *P + 10;
    // cout << "POinter values: " << *P << endl;
}
int main()
{
    int num;
    cout << "Enter the value: ";
    cin >> num;
    cout << "Original value: " << num << endl;
    changeValue(&num);
    cout << "New value: " << num << endl;
}