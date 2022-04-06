#include<iostream>
using namespace std;

int sum (int a , int b){
    cout<<"Using function with 2 argument"<<endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout<<"Using function with 3 argument"<<endl;
    return a+b+c;
}
//volume of cylinder
double volcy(int r, int h){
return (3.14*r*h);
}
//volume of cuboid
int volcuboid(int a, int b, int c){
    return (a*b*c);
}
//volume of cube
int volcube(int a){
    return (a*a*a);
}
int main(){
    int a=3, b=7, c=6 ;
      cout<<"The sum of a and b is "<<sum(a,b)<<endl;
      cout<<"The sum of a, b  and c is "<<sum(a, b, c )<<endl;
      cout<<"Volume of cylinder 0f radius a and height b "<<volcy(a,b)<<endl;
      cout<<"Volume of cuboid 0f side a, b and c "<<volcuboid(a,b,c)<<endl;
      cout<<"Volume of cube of side a "<<volcy(a,b)<<endl;
    return 0;
}