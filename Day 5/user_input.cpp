#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}

int main(){
    int x;
    cout<<"Enter value of x: "<<endl;
    cin>>x;
    cout<<"Square of x is: "<<square(x)<<endl;

    return 0;
}