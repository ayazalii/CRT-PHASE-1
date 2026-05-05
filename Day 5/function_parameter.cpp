// write a function with default argument and calling it with or without parameter .
#include<iostream>
using namespace std;

void greet(string name = "Guest"){
    cout<<"hello "<<name<<endl;
}


int main(){
    greet("Ayaz");//with parameter
    greet();//without parameter
    return 0;
}