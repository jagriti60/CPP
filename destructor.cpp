#include<iostream>
using namespace std;
int count=0;
class destr
{
    public:
    destr()
    {
        count++;
        cout<<"\nNo. of objects created"<<count<<endl;
    }
    ~destr()               //destructor
    {
        count--;
        cout<<"\nNo. of objects destroyed"<<count<<endl;
    }
};
int main()
{
    destr aa,bb,cc;
    {
        destr dd;
    }
    return 0;
}