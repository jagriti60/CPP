//Positive negative and zero using class and objects...
#include<iostream>
using namespace std;

class if_else{
    
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"\nEnter number to check";
        cin>>a;
    }
    void putdata()
    {
        if(a>0)
        cout<<"Positive";
        else if(a<0)
        cout<<"Negative";
        else
        cout<<"Zero";
    }
};
int main(){
    if_else bb;
    bb.getdata();
    bb.putdata();
    return 0;
}