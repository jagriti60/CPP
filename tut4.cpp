//reference variables and typecasting...
#include<iostream>
using namespace std;
int i=85;
int main()
{
    float x=566;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    //***********TYPECASTING***************
    int a =85.3;
    cout<<float(a)<<endl;
    float b=23.58;
    cout<<(int)b<<endl;
    cout<<int(b)<<endl;
    return 0;
}