#include<iostream>
using namespace std;

class Student{
    public:

    string name;
    int rollNumber;
};

int main(){

    Student s1;
    s1.name="Modi";
    s1.rollNumber=21;

    Student s2;
    s2.name="Rahul";
    s2.rollNumber=22;

    cout<<s1.name<<endl;
    cout<<s1.rollNumber<<endl;

    cout<<s2.name<<endl;
    cout<<s2.rollNumber<<endl;

    return 0;
}