//local and global scope...
#include<iostream>
using namespace std;
int glo=36;
void sum(){
    cout<<"\nglobally glo="<<glo;
}
int main()
{   
    int glo=25;
    glo=50;    
    sum();
    cout<<"\nlocally glo="<<glo;
    int i=52;
    cout<<"globally glo="<<::glo; //:: scope resolution operator  used for global variable
    return 0;
}