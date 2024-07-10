#include<iostream>
using namespace std;
class demo
{
    static int x;
    int y,z;
    public:
    void getdata(int a,int b)
    {
        y=a;
        z=b;
        x+=1;
    }
    void putdata()
    {
        cout<<"y="<<y<<"z="<<z<<"x="<<x<<endl;
    }
};
int demo::x;
int main(){
    demo aa,bb;
    aa.getdata(5,10);
    bb.getdata(20,30);
    aa.putdata();
    bb.putdata();
    return 0;
}