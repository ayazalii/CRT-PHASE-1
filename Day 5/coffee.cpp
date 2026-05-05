// write a function that takes number of coffee shots , return the total number of coffee volume if one shot=30ml
#include<iostream>
using namespace std;
int main(){
    int shots;
    int volume;
    cout<<"Enter number of shots:"<<endl;
    cin>>shots;

volume = shots*30;
cout<<"Volume is: "<< volume<<endl;
return 0;
}