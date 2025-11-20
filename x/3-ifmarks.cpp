#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    A school has following rules for grading systems:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade
    */
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks < 25 && marks >= 0)
        cout << "Grade F";
    else if (marks <= 44) // && marks >= 25 you can choose to omit this from the original code. since we are using an else-if loop here, it basically will jump over to check if what it needs to be executed is written in one of the statements instead of executing each and every line.
        cout << "Grade E";
    else if (marks <= 49 && marks >=45)
        cout << "Grade D";
    else if (marks <= 59 && marks >=50)
        cout << "Grade C";
    else if (marks <= 79 && marks >=60)
        cout << "Grade B";
    else if (marks <= 100 && marks >=80)
        cout << "Grade A";
    return 0;
}