// Reverse of a no. using class and objects...
#include<iostream>
using namespace std;

class reverse{
    
    private:
    int n;
    public:
    void getdata();
    void putdata();
};
void reverse::getdata()
{
    cout<<"\nEnter no.";
    cin>>n;
}
void reverse::putdata()
{
    int rev=0;
    for (;n>0;n/=10)
        rev=rev*10+n%10;
    cout<<rev;
}
int main(){
    reverse aa;
    aa.getdata();
    aa.putdata();
    return 0;
}