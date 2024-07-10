#include<iostream>
using namespace std;

class demo{
    private:
    int a;
    public:
    demo()   //default
    {
        a=10;
    }
    demo(demo &z)     //copy constructor
    {
        a=z.a;
    }
    void putdata();
};
void demo::putdata()
{
    cout<<"\nA="<<a<<endl;
}
int main(){
    demo aa;
    demo bb(aa);    // or demo bb=aa;
    bb.putdata();
    aa.putdata();
    return 0;
}