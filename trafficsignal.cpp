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