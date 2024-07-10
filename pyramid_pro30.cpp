//PYRAMID PRINTING...
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,b;
    cout<<"\n Enter no. of lines";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (b=1;b<=(n-i);b++)
        cout<<" ";
        for(j=1;j<=(2*i-1);j++)
        cout<<"*";
        cout<<endl;

    }
    return 0;
}