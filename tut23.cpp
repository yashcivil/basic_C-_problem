#include<iostream>
using namespace std;
 
 class Employee 
 { 
     private:
        int a, b, c;
     public:
        int d, e;
        void setData(int a1, int b1, int c1); //Decaration
        void getData(){
            cout<<"Enter the value of a is "<<a<<endl;
            cout<<"Enter the value of b is "<<b<<endl;
            cout<<"Enter the value of c is "<<c<<endl;
            cout<<"Enter the value of d is "<<d<<endl;
            cout<<"Enter the value of e is "<<e<<endl;
        }

 };
 void Employee ::setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
 }
 
int main(){
     Employee yashcivil;
    //  yashcivil.a; // This will throw error as a is private 
     yashcivil.d=20;
     yashcivil.e=50;
     yashcivil.setData(1, 3, 4);
     yashcivil.getData();
     

   return 0; 
}