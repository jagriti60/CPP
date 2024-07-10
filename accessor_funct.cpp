// If we want to use private section...
#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    void input()
    {
        cout<<"\nEnter number";cin>>a;
    }
    int getin()    //accessor function
    {
        return a;
    }
};
class pqr:public abc
{
    int b;
    public:
    void getdata()
    {
        cout<<"\nEnter second number";
        cin>>b;
    }
    void output()
    {
        cout<<"Product="<<getin()*b; //use accessor funct. instead of a.
    }
};
int main()
{
    pqr pp;
    pp.input();
    pp.getdata();
    pp.output();
    return 0;
}