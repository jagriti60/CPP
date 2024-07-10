//patttern printing... type3
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"\nEnter number of lines";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<"\n";
    }
    return 0;
}