#include<iostream>
using namespace std;
union money{       //we will use only one currency at a time...
        int rice;     //so we use memory share between these and in c++ it is done using union
        char car;
        float pounds;
    };
int main(){
    union money m1;
    m1.rice=25;
    m1.car='c';    //rice is overwritten by car
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    return 0;
}