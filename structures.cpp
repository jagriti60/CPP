//Structures 
#include<iostream>
using namespace std;
struct employee
{
    int id;
    char name;
    float salary;
};
//Type 2
typedef struct student
{
    int roll;
    char grade;
    float marks;
}st;

int main(){
    struct employee jaggu;
    jaggu.id=1;
    jaggu.name='j';
    jaggu.salary=50000000.50;
    cout<<jaggu.salary<<endl;
    cout<<jaggu.id<<endl;
    cout<<jaggu.name<<endl;
    //
    st om;
    om.roll=5;
    om.marks=95;
    om.grade='a';
    cout<<om.roll<<endl;
    cout<<om.grade<<endl;
    cout<<om.marks<<endl;
    return 0;
}