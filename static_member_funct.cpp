#include<iostream>
using namespace std;
class demo{
    int x;
    static int y;
    public:
    void getdata(int a);
    void putdata();
    static void abc()
    {
        cout<<"\ny="<<y;
    }

};
int demo::y;
void demo::getdata(int a)
{
    x=a;
    y+=1;
}
void demo::putdata()
{
    cout<<"\nx="<<x<<"\ny="<<y;
}
int main(){
    demo aa;
    aa.getdata(10);
    aa.putdata();
    demo::abc();
    return 0;
}