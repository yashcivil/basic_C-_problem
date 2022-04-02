#include<iostream>
#include<iomanip>
  
using namespace std;

int main()
{
    // int a=35;
    // cout<<"The value of a was "<<a<<endl;
    // a=5;
    // cout<<"The value of a is "<<a<<endl;
    
    // char c='c';
    // cout<<"The value of c is "<<c<<endl;
    // c='4';
    // cout<<"The value of c was "<<c<<endl;

    // Cconst in c++
    // const int a=6;
    // cout<<"The value of is "<<a<<endl;
    // a=35; // You will get an error becouse a is a constant 
    // cout<<"The value of a was "<<a<<endl;

//    Manipulator in c++
    // int a=4, b=25, c=2438;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;

    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;

    // Operator precedence
    int a=4,  b=5;
    // int c=a*b+10;
    int c=(((a*b)+b)-45)+70;
    cout<<"the value of c is "<<c;
    

    return 0;

}