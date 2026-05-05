#include<iostream>
using namespace std;

int coffeeVolume(int shots){
    return shots*30;
}

int main()
{
    int shots;
    cout<<"Enter no. of shots: ";
    cin>>shots;

    // int total = coffeeVolume(shots);
    cout<<"total volume is : "<<coffeeVolume(shots)<<" ml"<<endl;

    return 0;
}