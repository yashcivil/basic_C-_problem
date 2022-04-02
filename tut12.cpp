#include<iostream>
using namespace std;

int main()
{
//  cout<<"I am a devil";
         int age;
         cout<<"Enter your age";
         cin>>age;
        //  Selectrion control structure: If else-If else ladder
//    if((age<18)&&(age>0))
//    {
//         cout<<"You can not come to the party";
//    }
//    else if(age==18){
//         cout<<"you will get a kid pass";
//    }
//    else if(age>18)
//       { cout<<"you can come to the party";}
//    else if (age==0){
//         cout<<"you are not born yet";
//    }  

// Selection control structures
    switch (age)
   {
 case 18:
    cout<<"You are 18 "<<endl;
    break;
case 22:
    cout<<"You are 22 "<<endl;
    break;
case 2:
    cout<<"You are 2 "<<endl;
    break;
default:
    cout<<"No special cases "<<endl;
    break;
}   
cout<<"Done with switch case";
    return 0;
}