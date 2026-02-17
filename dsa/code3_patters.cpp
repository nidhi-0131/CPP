#include <bits/stdc++.h>
using namespace std;
int main() { // all using for loops
    
    int n;
    cin >> n;
    
    cout << "square pattern\n";
    int i, j;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "square 2\n";
    int k, l;
    for (k=1; k<=n; k++) {
        char ch='A';
        for (l=1; l<=n; l++) {
            cout << ch;
            ch += 1;
        }
        cout << "\n";
    }
	
    cout << "pattern 3\n";
    int h, g, num = 1;
    for (h=1; h<=n; h++) {
        for (g=1; g<=n; g++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    cout << "triangle pattern 4\n";
    int e, f;
    for (e=1; e<=n; e++) {
        for (f=1; f<=e; f++) { // for (f=e; f>=1; f--)
            cout << "* "; // cout << e << " "; for 1; 22; 333; 4444; and cout << f << " "; for 1; 12; 123; 1234;
        }
        cout << "\n";
    }

    cout << "pattern 5\n";
    int c, d, number=1;
    for (c=1; c<=n; c++) {
        for (d=1; d<=c; d++) {
            cout << number << " ";
            number++;
        }
        cout << "\n";
    }

    cout << "pattern 6\n";
	int a, b;
	for (a=0; a<n; a++) {
	    for (b=0; b<a; b++) {
	        cout << "  ";
	    }
	    for (b=0; b<(n - a); b++) {
	        cout << (a + 1) << " ";
	    }
	    cout << "\n";
	}

    cout << "pyramid pattern 7\n";
    int m, o;
    for (m=1; m <= n; m++) {
        for (o = 1; o <= (n - m); o++) {
            cout << "  ";
        }
        for (o = 1; o <= m; o++) {
            cout << o << " ";
        }
        for (o = (m - 1); o >= 1; o--) {
            cout << o << " ";
        }
        cout << "\n";
    }                                      

    cout << "hollow pyramid pattern 8\n";
    int p, q;
	for (p = 0 ; p < n; p++) {
	    for (q = 0; q < (n - p - 1); q++) {
	        cout << "  ";
	    }
	    cout << "* ";
	    if (p != 0) {
	        for (q = 0; q < 2*p - 1; q++) {
	            cout << "  ";
	        }
	        cout << "* ";
	    }
	    cout << "\n";
	}
	for (p = 0; p < (n - 1); p++) {
	    for (q = 0; q < (p + 1); q++) {
	        cout << "  ";
	    }
	    cout << "* ";
	    if (p != n - 2) {
	        for (q = 0; q < 2*(n - p) - 5; q++) {
	            cout << "  ";
	        }
	        cout << "* ";
	    }
	    cout << "\n";
	}

    return 0;
}