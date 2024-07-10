//Constants,Manipulators(endl and setw()),Operator precedence...
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int a=52;  //we can't change the value of a now...
    int b=54,c=23;
    cout<<setw(10)<<a<<endl;//setw(n) makes the no. of n characters using spaces.
    cout<<setw(5)<<b<<endl;
    cout<<setw(8)<<c<<endl;
    cout<<(23*2+3);
}