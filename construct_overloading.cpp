//
#include<iostream>
using namespace std;
// Overloading means different classes with same name.
class demo{
    int a;
    public:
    demo()         //default
    {
        a=10;
    }
    demo(int x)   //parameterized
    {
        a=x;
    }
    demo(demo &z)    //copy
    {
        a=z.a;
    }
    void putdata()
    {
        cout<<"A="<<a<<endl;
    }
};
int main(){
    demo aa;
    demo bb(45);
    demo cc(aa);
    demo dd(bb);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    dd.putdata();
    return 0;
}