//switch case...
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 23:
    cout<<"you are 23"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}