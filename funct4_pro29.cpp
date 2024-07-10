//WITH ARG WITH RETURN
#include<iostream>
using namespace std;
int add(int,int);     //function prototype
int main()
{
    int a,b,sum;
    cout<<"\nenter two numbers"<<endl;
    cin>>a>>b;
    sum=add(a,b);         //function call
    cout<<"sum="<<sum<<endl;
    return 0;
}
int add(int a,int b)    //function definition
{
    int c;
    c=a+b;
    return c;
}