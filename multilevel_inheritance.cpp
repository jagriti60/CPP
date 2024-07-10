#include<iostream>
using namespace std;
class X
{
    protected:
    int  x;
    public:
    void input1()
    {
        cout<<"\nEnter number"<<endl;cin>>x;
    }
};
class Y:public X
{
    protected:
    int  y;
    public:
    void input2()
    {
        cout<<"\nEnter number"<<endl;cin>>y;
    }
};
class Z:public Y
{
    protected:
    int  z;
    public:
    void input3()
    {
        cout<<"\nEnter number"<<endl;cin>>z;
    }
    void output()
    {
        cout<<"sum="<<x+y+z;
    }
};
int main()
{
    Z zz;
    zz.input1();
    zz.input2();
    zz.input3();
    zz.output();
    return 0;
}