// There are two type of header files:
// 1. System header files: It comes with compiler
#include<iostream>
// 2. User defined header files: It is written by programmer
// #include"this.h" //-->This will prodeuce an erro if this.h is not present in current directory
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"Operator in c++:"<<endl;    
    cout<<"following are the type of Operator in c++:"<<endl;
    // Arithmetic operator <<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<endl;
    // Asignment operator--> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    
    // Logicl operator
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)  is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) && (a<b)  is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b))  is "<<(!(a==b))<<endl;
    return 0;
}