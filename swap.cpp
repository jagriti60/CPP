//swap function using pointer...
#include<iostream>
using namespace std;
/*void swap(int* a,int* b)            ///*a=value of a
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=4,b=5;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap(&a,&b);             // &a=address of a
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}*/
//swap using reference variables...
void swaprefVar(int& a,int& b)      //float x=5
{                                   //float &y=x --> y=x
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=4,b=5;
    cout<<"a="<<a<<"b="<<b<<endl;
    swaprefVar(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
}