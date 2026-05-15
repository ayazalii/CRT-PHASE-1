#include<iostream>
using namespace std;

void revArr(int a[], int l, int r){
    if(l>r) return;
    swap(a[l],a[r]);
    revArr(a,l+1,r-1);
}

int main(){

    int a[]={1,2,3,4,5};
    revArr(a,0,4);
    cout<<revArr;

    return 0;
}