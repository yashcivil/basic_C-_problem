#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo=9;
   glo=50;
    int a=3;
    int b=5;
    float c=2.5;
    char d='u';
   sum();
   cout<<glo;
   
    // cout<<" This is tutorial 4. \nHere the value of a is " <<a<< " \n The value of b is "<< b;
    // cout<<"\nThe value of c is "<<c;
    // cout<<"\nThe value of d is "<<d;
    return 0;
}