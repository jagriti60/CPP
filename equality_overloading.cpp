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
    bool operator==(demo bb)
    {
        if(a==bb.a)
        return true;
        else
        return false;
    }
};
int main()
{
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    if (aa==bb)
    cout<<"Equal";
    else
    cout<<"Unequal";
    return 0;
}