//Fibonacci using recursion...
//nth term of series...
#include<iostream>
using namespace std;
int fibo(int n)
{
    if (n<2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);

}
int main(){
    int n;
    cout<<"\nEnter term"<<endl;
    cin>>n;
    cout<<n<<"th fibonacci term is "<<fibo(n)<<endl;
    return 0;
}