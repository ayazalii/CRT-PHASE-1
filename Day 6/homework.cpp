// wap to create a student management system where we store and display student details : 1. name  2 . rollno 3.regno. 4. emailid 5. phone no. 6.marks using parametrised and default constructor
#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;
    int regno;
    string email;
    long long phoneno;
    int marks;

    public:

    //Default constructor

    Student(){
        name="Not given";
        rollno=0;
        regno=0;
        email="Not available";
        phoneno=0;
        marks=0;
    }

    //PARAMETRISED CONSTRUCTOR

    Student(string n,int r,int reg,string e,long long p,int m){

        
        name= n;
        rollno= r;
        regno= reg;
        email= e;
        phoneno=p;
        marks=m;
    }
//FN TO DISPLAY DETAILS
void display(){
        cout << "Student Details" << endl;
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollno << endl;
        cout << "Reg No    : " << regno << endl;
        cout << "Email ID  : " << email << endl;
        cout << "Phone No  : " << phoneno << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main(){
    //OBJECT USING DEFAULT CONSTRUCTOR

    Student s1;

    //OBJECT USING PARAMETRISED CONSTRUCTOR

    Student s2("Ayaz",21,330,"ayaz@gmail.com",123456789,92);

    cout<<"Default constructor output : "<<endl;
    s1.display();

    cout<<"Parametrised constructor output : "<<endl;
    s2.display();
    return 0;
}
