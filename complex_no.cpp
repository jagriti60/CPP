//Adding complex numbers...
#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void getdata()
    {
        cout<<"Enter real and imaginary number"<<endl;cin>>r>>i;
    }
    void putdata()
    {
        cout<<"Sum="<<r<<"+"<<i<<"i";
    }
    complex operator+(complex bb)
    {
        complex cc;
        cc.r=r+bb.r;
        cc.i=i+bb.i;
        return cc;
    }
};
int main()
{
    complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    cc.putdata();
    return 0;
}