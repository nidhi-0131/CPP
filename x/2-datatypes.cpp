#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int, long and long long: all three have got ranges
    int x = 10;
    long y = 17897645;
    long long z = 1534646456780045;
    cout << "value of x: " << x << ", y: " << y << ", and z: " << z << endl;

    // float and double: integers can be stored along with decimals
    float a = 5.637;
    double b = 3.98765456789;
    cout << "decimals: " << a << ", " << b << endl;

    //string and getline
    /* string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl; 
    string s = "Pranati";
    cout << s << endl; */
    string str;
    getline (cin, str);
    cout << str << endl;

    //char: can store all 256 characters of the english dictionary
    char ch = 'g';
    cout << ch;

    return 0;
}