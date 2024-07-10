#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){                //default constructor(No argument)
        cout<<"\nEnter two numbers"<<endl;
        cin>>a>>b;
    }
    void putdata();
};
void demo::putdata()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    demo vv;     //Constructor is automatically called when object is created.
    vv.putdata();
    return 0;
}