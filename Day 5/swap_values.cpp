// swap two numbers using pointer
#include<iostream>
using namespace std;

void swap(int *a1,int *b1){
    int temp=*a1;
    *a1=*b1;
    *b1=temp;
}
int main (){

    int a= 10;
    int b = 20;

    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    // int a=10;

    // int b = 20;

    // int *ptr = &a;
    // a=b;
    // b=a;
    // cout<<a<<endl<<b<<endl;

    return 0;
}