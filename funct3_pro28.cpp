//WITH ARG NO RETURN
#include<iostream>
using namespace std;
void add(int,int);     //function prototype
int main()
{
    int a,b;
    cout<<"\nenter two numbers"<<endl;
    cin>>a>>b;
    add(a,b);         //function call
    return 0;
}
void add(int a,int b)    //function definition
{
    int sum;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}