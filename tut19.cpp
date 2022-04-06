#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
//This will not swap a and b
void swap(int a, int b){ //temp  a  b
    int temp=a;          //4     4  5
    a=b;                 //4     5  5
    b=temp;              //4     5  4
}
//Call by reference using pointers 
void swapPointer(int* a, int* b){ //temp  a  b
    int temp=*a;          //4     4  5
    *a=*b;                 //4     5  5
    *b=temp;              //4     5  4
}
//Call by reference using c++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp  a  b
    int temp=a;          //4     4  5
    a=b;                 //4     5  5
    b=temp;              //4     5  4

}
int main(){
    int x=4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
       cout<<"The value of a is : "<<x<<" -The value of b is "<<y<<endl;
    //    swap(x,y);//This will not swap a and b
    // swapPointer(&x, &y);// This will swap a and b Using pointer reference
    // swapReferenceVar (x, y)= 766;// This will swap a and b Using reference variable
    swapReferenceVar (x, y);// This will swap a and b Using reference variable
       cout<<"The value of a is : "<<x<<" -The value of b is "<<y<<endl;

    return 0;
}