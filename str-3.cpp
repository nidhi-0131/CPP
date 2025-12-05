#include <bits/stdc++.h>
using namespace std;

int main() {
	char f_name[20];
	char l_name[20];
	char full_name[50];
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Enter your last name: ";
	cin >> l_name;
	cout << "Hi " << f_name << "! Your first name has " << strlen(f_name) << " characters, and your last name has " << strlen(l_name) << " characters." << endl;
	strcpy(full_name, f_name);
	strcat(full_name, " ");
	strcat(full_name, l_name);
	cout << "Your full name is: " << full_name << endl;
	if ((strcmp(f_name, l_name))==0)
	    cout << "Both strings are equal." << endl;
	else
	    cout << "Strings are not equal." << endl;
	return 0;
}