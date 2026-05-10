#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str1="Hello";
    string str2="Jecrc";

    //METHODS OF STRING

    // 1 LENGTH OF STRING
    int n=str1.length();
    cout<<"Length of string is: "<<n<<endl;

    //2 APPEND STRING 
    cout<<"After appending , string is: "<<str1.append("Students")<<endl;

    // 3 EMPTY STRING
    cout<<"Is string empty? : "<<str2.empty()<<endl;

    // 4 CONCATINATION OF STRING
    cout<<"After concatination of string is: "<<str1 + "Bacho"<<endl;
    cout<<"After concatination of string is 2: "<<str1<<endl;

    // push_back() method
    str2.push_back('U');
    cout<<"After push_back() method: "<<str2<<endl; //JecrcU


    //FIND METHOD
    int index = str1.find("ello");
    cout<<"Index of 'ello' in str1 is: "<<index<<endl;

    //at method.str1(1)
    char ch=str1.at(1);
    cout<<"Character at index 1 in str1 : "<<ch<<endl;

    //swap method
    str1.swap(str2);
    cout<<"After swapping str1 and str2 : "<<endl;
    cout<<"Str1 : "<<str1<<endl;
    cout<<"Str2 : "<<str2<<endl;

    //substr method
    string subStr = str2.substr(5,6);//5 is index and 6 is length of substring
    cout<<"Substring of str2 from index 5 with length 6 is: "<<subStr<<endl;


    //getline() method
    string str3;
    getline(cin,str3);
    cout<<"you entered : "<<str3<<endl;


    return 0;
}