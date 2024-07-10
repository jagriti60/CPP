// inline function 
#include<iostream>
using namespace std;
inline int square(int a)
{
    return a*a;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int n;
    cout<<"\n Enter number"<<endl;
    cin>>n;
    cout<<"Square"<<square(n)<<endl;
    cout<<"Cube"<<cube(n)<<endl;
    return 0;
}