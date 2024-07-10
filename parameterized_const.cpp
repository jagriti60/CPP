#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y)   //parameterized constructor(Argument is req.)
    {
        a=x+y;
        b=y-x;
    }
    void putdata()
    {
    cout<<"sum="<<a<<endl;
    cout<<"diff="<<b<<endl;
    }
};
int main(){
    int x,y;
    cout<<"\nEnter two numbers"<<endl;
    cin>>x>>y;
    demo aa(x,y);
    aa.putdata();
    return 0;
}