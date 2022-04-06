#include<iostream>
using namespace std;

inline int product(int a, int b){
//int product(int a, int b){
    //Not recommended to use below lines with inline functions
    //static int c=0; //This exicutes only once
    //c = c+1;        //Next time this function is run,the value of will be retained
    //return a*b+c;
    return a*b;
}
float moneyReceived(int currentmoney, float factor=1.04){
           return currentmoney*factor;
}
//int strlen(const char *p){

// }
int main(){
    //   int a, b;
    //   cout<<"Enter the value of a and b "<<endl;
    //   cin>>a>>b;                                                                                                                   
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
    //   cout<<"The product of a and b "<<product(a,b)<<endl;
      int money=100000;
      cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived (money)<<"after one year"<<endl;
      cout<<"for VIP if  you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived (money, 1.1)<<"after one year";
    return 0;
}