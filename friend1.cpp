#include<iostream>
using namespace std;
class demo
{
    int m,n;
    public:
    void getdata();
    friend int sum(demo);
};
void demo::getdata()
{
    cout<<"\nEnter two numbers:"<<endl;
    cin>>m>>n;
}
int sum(demo aa)
{
    return(aa.m+aa.n);
}
int main(){
    demo aa;
    aa.getdata();
    cout<<sum(aa);
    return 0;
}