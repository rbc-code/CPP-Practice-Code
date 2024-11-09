#include <iostream>
using namespace std;
int main ()
{
    int number1, number2;
    cout <<"Enter First Number:\n";
    cin>> number1;
    cout <<"Enter Second Number:\n";
    cin>> number2;

    if(number1>=number2)                
    {
        cout <<"Large Value="<<number1;
    }
    else
    {
        cout<<"Large value ="<<number2;
    }
    return 8;
    
}