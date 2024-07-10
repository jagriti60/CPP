#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    void getdata()
    {
        cout<<"\nEnter number";
        cin>>x;
    }
    friend int sum(A,B);
};
class B
{
    int y;
    public:
    void input()
    {
        cout<<"\nEnter number";
        cin>>y;
    }
    friend int sum(A,B);
};
int sum(A aa,B bb)
{
    return(aa.x+bb.y);
}
int main(){
    A aa;
    B bb;
    aa.getdata();
    bb.input();
    cout<<sum(aa,bb);
    return 0;
}