#include<iostream>
using namespace std;

bool isDivisible(int x,int n){
    //base case
    if(n==0) return true; //divisible by 2^0=1
    if(x%2!=0) return false; //not divisible by 2
    //recursive case
    return isDivisible(x/2,n-1);
    
}
int main(){
    int x,n;
    cin>>x>>n;

    if(isDivisible(x,n))

    cout<<"Yes , divisible.";
    else
    cout<<"Not divisible.";
;    return 0;
}