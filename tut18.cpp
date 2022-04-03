#include<iostream>
using namespace std;

// Function prototype 
// type function-name (arguments);
// int sum(int a, int b);//-->Acceptable
// int sum(int a, b);//--->Not Acceptable 
int sum(int , int );//--> Acceptable
// void g(void);// Aceptable
void g();
int main(){
      int num1, num2;
      cout<<"Enter the value of num1 "<<endl;
      cin>>num1;
      cout<<"Enter the value of num1 "<<endl;
      cin>>num2;
    //   num1 and num2 are actual parameter
      cout<<" The sum is "<<sum(num1, num2);
      g();
     return 0;
}
int sum(int a, int b ){
int c = a+b;
// Formal parameter a and b will be taking value from actual parameters num1 and num2
return c;
}
void g(){
    cout<<"\nHello good morning"<< endl;
}
