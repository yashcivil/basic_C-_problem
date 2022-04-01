#include<iostream>
using namespace std;
 int main()
 {
    //  ***********Build in data types************
    //   int a,b,c;
    // cout<<"Enter the value of a :"<< endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<< endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The globle c is "<<::c

//  ***********Float, double and long double Literals************
    // float d=23.4f;
    // long double e=23.4;
    // cout<<"The size of 23.4 is " <<sizeof(23.4)<<endl;
    // cout<<"The size of 23.4f is " <<sizeof(23.4f)<<endl;
    // cout<<"The size of 23.4F is " <<sizeof(23.4F)<<endl;
    // cout<<"The size of 23.4l is " <<sizeof(23.4l)<<endl; 
    // cout<<"The size of 23.4L is " <<sizeof(23.4L)<<endl;
 
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    
    // **********reference variables***********
    // Rohan Das---> Monty----> Rohu----> Dangerous Player
    // float x = 225;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //  ***********Typecasting************
       int a= 35;
       float b=35.34;
       cout<<"The value of a is "<<(float)a<<endl;
       cout<<"The value of a is "<<float(a)<<endl;

       cout<<"The value of b is "<<(int)b<<endl; 
       cout<<"The value of b is "<<int(b)<<endl;
        int c=int (b);
       cout<<"The expression is "<<a+b<<endl;
       cout<<"The expression is "<< a+ int(b)<<endl;
       cout<<"The expression is "<<(int)b<<endl;
    return 0;
 }
 