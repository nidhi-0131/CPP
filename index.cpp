//random//
#include <iostream>
using namespace std;
int main()
{
    int a=10, b=3;
    cout<<"On adding a and b, we get"<<(a+b)<<",";
    return 0;
}

//14-10-2025: 1//
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    if (a!=0)
    {
       cout<<"ABC:";
    }
    else
    {
       cout<<"DEF:";
    }
}

//15-10-2025: 2//
#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the value of age:";
	cin>>age;
	if (age>=18)
	{
		if (age>=18 && age<=56)
		{
			cout<<"eligible for work";
		}
		else
		{
			cout<<"not eligible for work";
		}
	}
	else
	{
		cout<<"age is minor";
	}
}

//15-10-2025: 3//
#include <iostream>
using namespace std;
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int d=4;
    int e=5;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}

//15-10-2025: 4//
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++)
    {
        cout<<" "<<i;
    }
}

//15-10-2025: 5//
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    for (int i=1; i<=10; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}

//15-10-2025: 6: By using a while loop WAP to print first 5 natural numbers//
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while (i<=5)
    {
        cout<<i; i++;
    }
}

//15-10-2025: 7: WAP in C++ to print the statement by using an example of "Traffic SIgnal"//
#include <iostream>
using namespace std;
int main()
{
    string colour;
    cout << "Enter the traffic light colour: ";
    cin>>colour;
    if (colour=="red")
    {
        cout<<"Traffic is STOP🚦";
    }
    else if (colour=="yellow")
    {
        cout<<"Traffic is READY TO MOVE ⚠️";
    }
    else if (colour=="green")
    {
        cout<<"Traffic is MOVING ✅";
    }
    else
    {
        cout<<"Invalid colour!";
    }
    return 0;
}

//16-10-2025: 8//
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter a day of the week: ";
    cin>>day;
    switch (day)
    {
        case 1:
        cout<<"Monday\n:";
        break;
        case 2:
        cout<<"Tuesday\n";
        break;
        case 3:
        cout<<"Wednesday\n";
        break;
        case 4:
        default:
        cout<<"Invalid Input! Please enter a number between 1 and 3.\n";
    }
    return 0;
}

//17-10-2025: 9: to print a number in reverse order//
#include <iostream>
using namespace std;
int main()
{
	int n=5;
	int i;
	for (i=n; i>=1; i--)
	{
		cout<<i<<" ";
	}
	return 0;
}

//17-10-2025: 10//
#include <iostream>
using namespace std;
int main()
{
	for (int i=0; i<4; i++)
	{
	    cout<<i<<" ";
	}
}

//17-10-2025: 11//
#include <iostream>
using namespace std;
int main()
{
	char operation;
	float num1, num2;
	cout<<"enter an operator (+, -, *, /): ";
	cin>>operation;
	cout<<"enter two numbers: ";
	cin>>num1>>num2;
	switch (operation)
	{
	case '+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
	case '-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
	case '*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
	case '/':
		if (num2!=0)
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
		else
			cout<<"Error! Division by zero.";
		break;
	default:
		cout<<"Error! Invalid operator.";
	}
	return 0;
}

//31-10-2025: 12//
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=5; i++)
    {
        int j;
        for (j=1; j<=5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

//31-10-2025: 13//
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=5; i++)
    {
        int j;
        for (j=1; j<=5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

//31-10-2025: 14//
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=5; i++)
    {
        cout << "* * * * * " << endl;
    }
    cout << endl;
    return 0;
}

//31-10-2025: 15//
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << "* ";
        }
    cout << endl;
    }
}

//31-10-2025: 16//
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << j << " ";
        }
    cout << endl;
    }
}

//31-10-2025: 17//
#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << i << " ";
        }
    cout << endl;
    }
}

//31-10-2025: 18//
#include <iostream>
using namespace std;
int main()
{
	int date;
	cout << "The boy steps out of his house on these dates each month: ";
	for (date=1; date<=30; date++)
	{
		if (date%2!=0)
		{
			continue;
		}
		cout << date << ", ";
	}
}

//31-10-2025: 19//
#include <iostream>
using namespace std;
int main()
{
	int date;
	cout << "The boy stays in his house on these dates each month: ";
	for (date=1; date<=30; date++)
	{
		if (date%2==0)
		{
			continue;
		}
		cout << date << ", ";
	}
}

//07-11-2025: 20//
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=4; i++)
    {
        int j;
        for (j=1; j<=7; j++)
        {
            if(i+j==5 || j-i==3 || i==4)
                cout << "* ";
            else
                cout << " ";
        }
        cout << " " << endl;
    }
    return 0;
}

//07-11-2025: 21//
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=5; i++)
    {
        int j;
        for (j=1; j<=5; j++)
        {
            if (i==5 || i==1 || j==1 || j==5)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << " " << endl;
    }
    return 0;
}

//10-11-2025: 22//
#include <iostream>
using namespace std;
int main ()
{
    int a[5] = {10, 20, 30, 40, 50};
    cout << "Entering the elements of array: " << endl;
    for (int i=0; i<=4; i++)
    {
        cout << a[i] << " " << endl;
    }
    return 0;
}

//10-11-2025: 23//
#include <iostream>
using namespace std;
int main ()
{
    int a[5];
    cout << "Enter the elements of array: " << endl;
    for (int i=0; i<=4; i++)
    {
        cin >> a[i];
    }
    cout << endl;
}

//10-11-2025: 24//
#include <iostream>
using namespace std;
int main ()
{
    int a[5] = {10, 20, 30, 40, 50};
    cout << "Entering the elements of array: " << endl;
    for (int i=4; i>=0; i--)
    {
        cout << a[i] << " " << endl;
    }
    return 0;
}

//10-11-2025: 25//
#include <iostream>
using namespace std;
int main ()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i=0; i<=2; i++)
    {
        for (int j=0; j<=2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//12-11-2025: 26//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int i;
    for (i=1; i<=n; i++)
    {
        int j, s;
        for (s=i; s<=n; s++)
            cout << " ";
        for (j=1; j<=i; j++)
            cout << "*";
        for (j=i- 1; j>=1; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}

//13-11-2025: 27//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int i;
    for (i=1; i<=n; i++)
    {
        int j, s;
        for (s=i; s<=n; s++)
            cout << " ";
        for (j=1; j<=i; j++)
            cout << j;
        for (j=i- 1; j>=1; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}

//24-11-2025: 28: functions//
#include <bits/stdc++.h>
using namespace std;
void say()
{
    cout << "Hello, Hi" << endl;
}
main()
{
    say();
}

//24-11-2025: 29: functions//
#include <bits/stdc++.h>
using namespace std;
void say(string msg)
{
    cout << "Hi! " << msg << endl;
}
int main()
{
    say("How are you?");
}

//24-11-2025: 30: functions//
#include <bits/stdc++.h>
using namespace std;
void displayNum(int n1, float n2) 
{
    cout << "The int number is " << n1 << endl;
    cout << "The float number is " << n2 << endl;
}
int main()
{
    int num1 = 5;
    float num2 = 5.5;
    displayNum(num1, num2);
    return 0;
}

//24-11-2025: 31: functions//
#include <bits/stdc++.h>
using namespace std;
void hello() 
{
    cout << "Geeks for Geeks" << endl;
}
int square(int x)
{
    return x*x;
}
int main()
{
    hello();
    int result=square(5);
    cout << "Square of 5 is " << result << endl;
    return 0;
}

//26-11-2025: 32: functions... sum of two numbers//
#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    return (a+b);
}
int main()
{
    int sum;
    sum=add(2345678, 8765432);
    cout << "Sum of the two numbers: " << sum << endl;
    return 0;
}

//03-12-2025: 33//
#include <bits/stdc++.h>
using namespace std;
void display(int x)
{
    return;
}
main ()
{
    int a=5;
    cout << "a = " << a << endl;
    display(a);
}

//03-12-2025: 34: print the increment number//
#include <bits/stdc++.h>
using namespace std;
void increment(int &i)
{
    i++;
    return;
}
int main ()
{
    int a=5;
    cout << "Before incrrement, a = " << a << endl;
    increment(a);
    cout << "After increment, a = " << a << endl;
    return 0;
}

//03-12-2025: 35: swap two numbers//
#include <bits/stdc++.h>
using namespace std;
void swap(int &i, int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
    return;
}
int main ()
{
    int a=8;
    int b=9;
    cout << "Before swapping: " << a << ", " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << ", " << b << endl;
    return 0;
}

//03-12-2025: 36: factorial//
#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if (num==0)
        return 1;
    else
        return num*fact(num-1);
}
int main ()
{
    int n;
    cin >> n;
    cout << "The factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}

//04-12-2025: 37: string//
#include <bits/stdc++.h>
using namespace std;
int main() {
	char hello[6]={'h', 'e', 'l', 'l', 'o'};
	cout << "welcome message: ";
	cout << hello;
	return 0;
}

//04-12-2025: 38: string//
#include <bits/stdc++.h>
using namespace std;
int main() {
	char str[100];
	cout << "enter a string: ";
	cin.getline(str, 100);
	cout << "you entered: ";
	cout << str;
	return 0;
}

//04-12-2025: 39: string//
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

//05-12-2025: 40: string//
#include <bits/stdc++.h>
using namespace std;
int main() {
	char myname[20];
	cout << "Enter your full name: ";
	// cin >> myname; // if more than one string is input, we use cin.getline(string_name, size); instead of cin >> string_name;
    // so here, cin.getline(myname, 20);
    cin.getline(myname, 20);
	cout << endl;
	cout << "Full name: " << myname << endl;
	cout << "Number of characters in your name: " << strlen(myname) << endl;
	return 0;
}

//05-12-2025: 41: string//
#include <bits/stdc++.h>
using namespace std;
int main() {
    char str[20];
    cout << "Enter the string: ";
    cin.getline(str, 20);
    cout << endl;
    cout << "String length: " << strlen(str) << endl;
    return 0;
}

//05-12-2025: 42: string comparison//
#include <bits/stdc++.h>
using namespace std;
int main() {
    char s1[5];
    char s2[6];
    cout << "Enter the first string: ";
    cin.getline(s1, 5);
    cout << endl;
    cout << "Enter the second string: ";
    cin.getline(s2, 6);
    cout << endl;
    if ((strcmp(s1, s2))==0)
        cout << "Both strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;
    return 0;
}

//05-12-2025: 43: string swapping//
#include <bits/stdc++.h>
using namespace std;
int main() {
    char s1[20];
    char s2[20];
    cout << "Enter the first string: ";
    cin.getline(s1, 20);
    cout << endl;
    cout << "Enter the second string: ";
    cin.getline(s2, 20);
    cout << endl;
    int len=min(strlen(s1), strlen(s2));
    for (int i=0; i<=len; i++) {
        if (i%2!=0) {
            swap(s1[i], s2[i]);
        }
    }
    cout << "Swapping the strings, \n";
    cout << "First string: " << s1 << endl;
    cout << "Second string: " << s2 << endl;
}

//05-12-2025: 44: string concatination//
#include <bits/stdc++.h>
using namespace std;
int main() {
    char s1[50];
    char s2[50];
    cout << "Enter the first string: ";
    cin.getline(s1, 50);
    cout << endl;
    cout << "Enter the second string: ";
    cin.getline(s2, 50);
    cout << endl;
    cout << "Concatination: " << strcat(s1, s2) << endl;
    return 0;
}