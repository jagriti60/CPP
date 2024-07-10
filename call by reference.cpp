//Call by reference variables...
//swap function
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<"b="<<b<<endl;
}
int main(){
    int a=4,b=5;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}