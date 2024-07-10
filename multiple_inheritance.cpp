//Multiple Inheritance...
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input1()
    {
        cout<<"\nEnter a number";
        cin>>a;
    }
};
class B
{
    protected:
    int b;
    public:
    void input2()
    {
        cout<<"\nEnter a number";
        cin>>b;
    }
};
class C:public A,public B  //multiple inheritance
{
    int c;
    public:
    void output()
    {
        c=a+b;
        cout<<"sum="<<c;
    }
};
int main()
{
    C cc;
    cc.input1();
    cc.input2();
    cc.output();
    return 0;
}