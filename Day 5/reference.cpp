#include<iostream>
using namespace std;
int main(){
    int a =5;
    int b =a;
    int &c=a;
    c=10;
    b=a;
    cout<<a<<endl<<c<<endl<<b<<endl;

    return 0;
}