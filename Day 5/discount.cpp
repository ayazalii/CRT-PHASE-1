//write a function that apply 10 percent discount using references,update the original bill amount and print it.
#include<iostream>
using namespace std;

void discount(float &bill){
    bill = bill - (0.10*bill);
    cout<<"Discounted bill after 10 % discount :"<<bill<<endl;

}
int main (){
    float bill;
    cout<<"Whats the total bill? "<<endl;
    cin>>bill;
    discount(bill);
    return 0;
}