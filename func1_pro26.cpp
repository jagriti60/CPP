//NO ARGUMENT NO RETURN
#include<iostream>
using namespace std;
void add(void);     //function prototype
int main()
{
    add();         //function call
    return 0;
}
void add(void)    //function definition
{
    int a,b,sum;
    cout<<"\nenter two numbers"<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}