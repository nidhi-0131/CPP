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
//error//
#include <iostream>
using namespace std;
int main()
{
    string colour, red;
    if (colour==red)
    {
        cout<<"traffic is stop";
    }
    else 
    {
        cout<<"traffic is moving";
    }
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