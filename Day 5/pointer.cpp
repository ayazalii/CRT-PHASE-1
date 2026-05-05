#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr=&a;
    cout<<"The address of a is: "<<ptr<<endl;
    cout<<"a: "<<*ptr<<endl;

    return 0;
}