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