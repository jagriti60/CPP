//overloading * operator...
#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a number"<<endl; cin>>a;
    }
    void putdata()
    {
        cout<<"Product="<<a<<endl;
    }
    demo operator*(demo bb)  //overloading - operator
    {
        demo cc;  //an internal obj cc is created.
        cc.a=a*bb.a;
        return cc;
    }
};
int main()
{
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa*bb;
    cc.putdata();
    return 0;
}