#include <iostream>
using namespace std;
int main ()
{
    int year;
    cout <<"Enter The Year:\n";
    cin >> year;
    
    if(year%4==0){                         
        cout <<"This is leap Year";
    }
    else{
        cout <<"This is not Leap Year";
    }
    return 8;
}