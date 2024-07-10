// Constructor Handling...
#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A(int x)  //parameterized constructor
    {
        a=x;
    }
    void display()
    {
        cout<<"\nA="<<a;
    }
};
class B
{
    protected:
    int b;
    public:
    B(int y)  //parameterised constructor
    {
        b=y;
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
    C(int p,int q, int r):A(q),B(p)  // handling of constructors A and B.
    {
        c=r;
    }
    void show()
    {
        cout<<"\nC="<<c;
    }
};
int main()
{
    C cc(10,20,30);
    cc.display();
    cc.putdata();
    cc.show();
    return 0;

}