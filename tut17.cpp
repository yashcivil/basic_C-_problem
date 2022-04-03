#include<iostream>
using namespace std;
typedef struct worker
{
    /* data */
    int wId; //4
    char favchar; //1
    float sallary; //4
}wp;
union money
{
    /* data */
    int cycle; //4
    char bike; //1
    float car; //4
};


int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<(m1==1);
    // cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
//    union money m1;
   
//    m1. cycle = 30;
//    m1.bike = 'c'; 
//    cout<<m1.bike ;
   


    // struct worker ram;
//    wp ram;
//    struct worker shyam;
//    struct worker rohandas;
//    ram. wId = 1;
//    ram. favchar = 'c';
//    ram. sallary = 50000000;
//    cout<<"The value is "<<ram.wId<<endl;  
//    cout<<"The value is "<<ram.favchar<<endl;  
//    cout<<"The value is "<<ram.sallary<<endl;  
 
    
      
    return 0;
}