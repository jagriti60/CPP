#include<iostream>
using namespace std;
int main()
{
    enum Meal{breakfast,lunch,dinner};    //data type
    Meal m1=lunch;
    Meal m2=breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<(m2==0)<<endl;
    cout<<(m1==0)<<endl;
    return 0;
}