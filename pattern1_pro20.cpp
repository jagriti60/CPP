//pattern printing...type1
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\nEnter number of lines";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}