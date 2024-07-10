//Single Inheritance...
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"\nEnter a number";
        cin>>a;
    }
};
class B:public A
{
    int b;
    public:
    void getdata()
    {
        cout<<"\nEnter second number"<<endl;cin>>b;
    }
    void putdata()
    {
        cout<<"sum="<<a+b;
    }
};
int main()
{
    B bb;
    bb.input();
    bb.getdata();
    bb.putdata();
    return 0;
}
