#include<iostream>
using namespace std;

int main()
{ 
    // cout<<"hello world";
    /*Loops in c++:
    There are three type of loops in c++:
    1. while loop 
    2. for loop
    3. do while loop */
    /* For loop in c++ */
    // for(initialisation; condition; upgradation)
    {
        // loop body(c++ code);
    }
    // for(int i = 0; i<40; i++)
    // {cout<<i<<endl;}
     
    // Example of infinite loop
    // for(int i = 0; 22<=40; i++)
    // {cout<<i<<endl;}
    
    
     /* While loop in c++ */
    // Syntax:
    // while(condition):
        // c++ statement;
    // }
    // int i=1;
    // while(i<=30)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //Example of infinte loop
    // int i=1; 
    // while(true)
    // cout<<i<<endl;
    // i++;
     /* do While loop in c++ */
    // Syntax:
    // do(condition):
    // c++ statements;
    // } while(conditons);
    // Printing 1 to 40 using loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    } while(i<=30);

    
    return 0;
}