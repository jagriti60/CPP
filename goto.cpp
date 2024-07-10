#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter a number";
    cin>>a;
    if (a%2==0)
    goto even;
    else
    goto odd;
    even:
    cout<<"\nThe no. is even";
    return 0;
    odd:
    cout<<"\nThe no. is odd";
    return 0;
}