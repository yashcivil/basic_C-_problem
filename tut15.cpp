#include<iostream>
using namespace std;

int main(){
    //    whta is pointers?--> data type which holds the address of data types
    int a=4;
    int* b = &a;
    // &-->(Address of) of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // *---(value at)Derefernce operator
    cout<<"The value of address of b is "<<*b<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl; 
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value of address c is "<<*c<<endl;
    cout<<"The value ataddress value_at(value_at(c)) of a is "<<**c<<endl;
    return 0;
}