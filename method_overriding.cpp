// Method Overriding...(same name diff funct/method)
#include<iostream>
using namespace std;
class X
{
    public:
    void output()
    {
        cout<<"\nBox class";
    }
};
class Y:public X
{
    public:
    void output()
    {
        cout<<"\nDerived class";
        X::output(); //for calling output function of base class.(In-function call)
    }
};
int main()
{
    Y yy;
    yy.output();  //this statement will call the functiom of derived class.
    yy.X::output();  //for calling output function of base class.(Independent call)
    return 0;
}