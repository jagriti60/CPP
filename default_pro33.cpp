//Default parameters...
#include<iostream>
using namespace std;
void add(int a,int b=5,int c=6);
int main()
{
    add(5);
    add(5,15);
    add(5,15,36);
    return 0;
}
void add(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    cout<<sum<<endl;
}