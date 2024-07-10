//if--else...  if--else if 
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age<18)
    cout<<"not allowed in party"<<endl;
    else if(age==18)
    cout<<"allowed as an adult"<<endl;
    else
    cout<<"allowed";
    return 0;
}