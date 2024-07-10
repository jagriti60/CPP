// Ambiguity means if different functions of base classes having same name are being inherited in derived class. Then how to call them?
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter a number A"<<endl; cin>>a;
    }
    void output()
    {
        cout<<"A="<<a;
    }
};
class B
{
    protected:
    int b;
    public:
    void input()
    {
        cout<<"\nEnter Value of B"; cin>>b;
    }
    void putdata()
    {
        cout<<"\nB="<<b;
    }
};
class C:public A,public B
{
    int c;
    public:
    void input()
    {
        cout<<"\nEnter number C";cin>>c;
        A::input(); //calling input funct. of class A and B.
        B::input();
    }
    void display()
    {
        cout<<"\nC="<<c;
    }
};
int main ()
{
    C cc;
    cc.input();   //calling input funct. of class C(parent/derived class).
    cc.output();
    cc.putdata();
    cc.display();
    return 0;
}