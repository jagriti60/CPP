//overloading assignment(=) operator
#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a number"<<endl;
        cin>>a;
    }
    void putdata()
    {
        cout<<"Value="<<a;
    }
    void operator=(demo bb)
    {
        a=bb.a;
    }
};
int main()
{
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();
    return 0;
}