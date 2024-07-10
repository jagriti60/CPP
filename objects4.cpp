//loop using class and objects...
#include<iostream>
using namespace std;
class oneten{
    public:
    void getdata();
    void putdata();
};
void oneten::putdata()
{
    for(int i=1;i<=10;i++)
    cout<<i<<endl;
}
int main(){
    oneten cc;
    cc.putdata();
    return 0;
}