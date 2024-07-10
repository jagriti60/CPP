#include<iostream>
using namespace std;
class xyz{
    private:
    int a,b;
    public:
    void getdata();
    void putdata();
};
void xyz::getdata()
{
    cout<<"\nEnter two numbers"<<endl;
    cin>>a>>b;
}
void xyz::putdata()
{
    cout<<"a="<<a;cout<<"b="<<b<<endl;
}
int main()
{
    xyz aa[4];
    int i;
    for(i=0;i<4;i++)
    aa[i].getdata();
    for(i=0;i<4;i++)
    aa[i].putdata();
    return 0;
}