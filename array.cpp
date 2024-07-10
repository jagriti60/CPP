//array
#include<iostream>
using namespace std;

int main(){
//array 1
    int score[3];
    score[0]=85;
    score[1]=84;
    score[2]=56;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;
    cout<<score[0]<<endl;
//array 2
    int marks[5]={64,85,39,68,78};
    marks[2]=80;      //you can change the value of an array...
    cout<<"ARRAY 2"<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
// array 3  using loop
    cout<<"ARRAY 3"<<endl;
    for(int i=0;i<=5;i++)
    cout<<marks[i]<<endl;
    // arrays and pointers....
    cout<<"ARRAY 4"<<endl;
    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    return 0;
}