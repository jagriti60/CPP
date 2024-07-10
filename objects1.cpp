//classes and objects #1
#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    void getdata();
    void putdata();
};
void add::getdata()
{
    cout<<"\nEnter two numbers"<<endl;
    cin>>a>>b;
}
void add::putdata()
{
    cout<<"Sum="<<a+b;
}
int main(){
    add aa;
    aa.getdata();
    aa.putdata();
    return 0;
}

//Classes and objects #2
#include<iostream>
using namespace std;
class sum{
    int a,b;
    public:
    void getdata()
    {
    cout<<"\nEnter two numbers"<<endl;
    cin>>a>>b;
    }
    void putdata()
    {
    cout<<"Sum="<<a+b;
    }
};
int main(){
    sum aa;
    aa.getdata();
    aa.putdata();
    return 0;
}