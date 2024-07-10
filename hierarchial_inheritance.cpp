#include<iostream>
using namespace std;
class A{
    public:
    void message()
    {
    cout<<"\nWelcome to class A.";
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"\nWelcome to class B.";
    }
};
class C:public A
{
    public:
    void print()
    {
        cout<<"\nWelcome to class C.";
    }
};
int main(){
    B bb;
    C cc;
    bb.message();
    bb.display();
    cc.message();
    cc.print();
    return 0;
}