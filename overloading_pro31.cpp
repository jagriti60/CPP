//function overloading
#include<iostream>
using namespace std;
void add(int,int);
void add(float,int);
void add(int,int,int);
int main()
{
    add(2,89);
    add(45.5F,48);
    add(34,76,90);
    return 0;
}
void add(int a,int b)
{cout<<"Sum="<<a+b<<endl;}
void add(float a,int b)
{cout<<"Sum="<<a+b<<endl;}
void add(int a,int b,int c)
{cout<<"Sum="<<a+b+c<<endl;}
