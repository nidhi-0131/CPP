#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (b + c) > a && (a + c) > b)
	{
		if (a == b && b == c)
			cout << "equilateral";
		else if (a == b || b == c || a == c)
			cout << "isosceles";
		else
			cout << "scalene";
	}
	else
	{
		cout << "not a triangle";
	}
	return 0;
}