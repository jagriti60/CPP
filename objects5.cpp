#include<iostream>
using namespace std;

class one_n{
    
    int n;
    public:
    void getdata()
    {
        cout<<"\nEnter a number";
        cin>>n;
    }
    void putdata()
    {
        int i=1;
        while(i<=n)
        {
            cout<<i<<endl;
            i++;
        }
    }
};
int main(){
    one_n jj;
    jj.getdata();
    jj.putdata();
    return 0;
}