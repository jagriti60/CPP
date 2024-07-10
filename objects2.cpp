//Odd Even using class and objects...
#include<iostream>
using namespace std;

class odd_eve{
    private:
    int a;
    public:
    void getdata();
    void putdata();
};
void odd_eve::getdata()
{
    cout<<"\nEnter no. to check";
    cin>>a;
}
void odd_eve::putdata()
{
    if (a%2==0)
    cout<<"Even";
    else
    cout<<"Odd";
}
int main(){
    odd_eve ab;
    ab.getdata();
    ab.putdata();
    return 0;
}