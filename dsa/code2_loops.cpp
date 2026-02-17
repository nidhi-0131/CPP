#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // while: numbers from 1 to n
    int count = 1, n;
	cin >> n;
    while (count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    // for loop: for (initialisation; condition; updation) { }: sum of numbers from 1 to m
    int i, m, sum=0;
	cin >> m;
    for (i = 1; i <= m; i++) {
        sum += i;
    }
    cout << "sum = " << sum << "\n";

    // for loop: using break
    int j, o, product = 1;
    cin >> o;
    for (j = 1; j <= o; j++) {
        product *= j;
        if (j == o) {
            break;
        }
    }
    cout << "product (factorial) = " << product;

    // sum of all odd numbers from 1 to p
    int k, p, add = 0;
    cin >> p;
    for (k = 1; k <= p; k++) {
        if (k % 2 != 0) {
            add += k;
        }
    }
    cout << "sum of odd numbers = " << add << "\n";

    //  sum of all odd numbers from 1 to p using while loop
    int l = 1, q, adding = 0;
    cin >> q;
    while (l <= q) {
        adding += l;
        l += 2;
    }
    cout << "sum of odd numbers = " << adding << "\n";

    // sum of all even numbers from 1 to p
    int a, r, addeven = 0;
    cin >> r;
    for (a = 1; a <= r; a++) {
        if (a % 2 == 0) {
            addeven += a;
        }
    }
    cout << "sum of even numbers = " << addeven << "\n";

    // do-while loop
    int b = 1, s;
    cin >> s;
    do {
        cout << b << " ";
        b++;
    } while (b <= s);
    cout << endl;

    // check if prime or not using while loop
    int c;
	cin >> c;
	bool isPrime = true;
	for (int d=2; d <= (c - 1); d++) { // or can use d*d <= c as well
	    if (c % d == 0) {
	        isPrime = false;
	        break;
	    }
	}
	if (isPrime == true) {
	    cout << "prime";
	} else {
	    cout << "non prime";
	}

    // pattern 1: nested loop
    int n2;
    cin >> n2;
    for (int i=1; i <= n2; i++) {
        for (int j=1; j <= n2; j++) {
            cout << "* ";
        }
        cout << "\n";
    }


    return 0;
}