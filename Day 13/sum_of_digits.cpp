#include<iostream>
using namespace std;
int sumOfDigits(int x){
    //base case
    if(x==0){
        return 0;
    }
    //recursive call
    return(x%10) + sumOfDigits(x/10);
}
int main(){
    int n;
    cin>>n;
    int result = sumOfDigits(n);
    cout<<"Sum is: "<<result;
    return 0;
}