//virtual function...
#include<iostream>
using namespace std;
class X
{
    public:
    virtual void show()  //virtual keyword is used then only on the basis of object created the respective class funct is called. 
    {
        cout<<"\nBase class";
    }
};
class Y:public X
{
    public:
    void show()
    {
        cout<<"\nDerived class";
    }
};
int main()
{
    Y yy;
    yy.show();  //calling show() funct. of derived class. EARLY BINDING
    X*ptr; //pointer to class X is created.
    X xx;
    ptr=&xx;
    /*Y aa;  //even if object of Y is created the funct. of X class is called.To avoid this we use virtual keyword in base class.
    ptr=&aa;*/
    ptr->show(); //calling show() funct. of pointer class. LATE BINDING
    return 0;
}