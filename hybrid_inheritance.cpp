//Hybrid Inheritance...
#include<iostream>
using namespace std;
class A
{
    public:
    void msg()
    {
        cout<<"\nInside class A.";
    }
};
class B:public A
{
    public:
    void print()
    {
        cout<<"\nInside class B.";
    }
};
class C
{
    public:
    void output()
    {
        cout<<"\nInside class C.";
    }
};
class D:public B,public C
{
    public:
    void display()
    {
        cout<<"\nInside class D.";
    }
};
int main()
{
    D dd;
    dd.msg();
    dd.display();
    dd.print();
    dd.output();
    return 0;

}