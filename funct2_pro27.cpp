//NO ARG WITH RETURN...
#include<iostream>
using namespace std;
int add(void);     //function prototype
int main()
{
    int sum;
    sum=add();    //function call
    cout<<"sum="<<sum<<endl;
    return 0;
}
int add(void)    //function definition
{
    int a,b,c;
    cout<<"\nenter two numbers"<<endl;
    cin>>a>>b;
    c=a+b;
    return c;
}