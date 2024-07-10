//Pointer is a data type which holds the address of other data types...
#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* b=&a;       //&a is address of a  and b=&a = address of a.
    cout<<"address of a="<<b<<endl;    
    cout<<"address of a="<<&a<<endl;  
    cout<<"value of address at b="<<*b<<endl;    // * gives value  
    int** c=&b;
    cout<<"value of address at c"<<c<<endl;   //pointer to pointer
    cout<<&b; 
return 0;
}