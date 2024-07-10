//overloading ++ operator...
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
        cout<<"Incremented="<<a<<endl;
    }
    void operator++ ()  //for aa++ give int in the brackets
    {
        a=a+1;
    }
};
int main()
{
    demo aa;
    aa.getdata();
    ++aa; //aa++;
    aa.putdata();
    return 0;
}