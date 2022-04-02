#include<iostream>
using namespace std;

int main(){
      int marks[]={10,20,30,40};
      int mathmark[]={225,123,235,420};
      cout<<"These are marks"<<endl;

    //   cout<<marks[0]<<endl;
    //   cout<<marks[1]<<endl;
    //   cout<<marks[2]<<endl;
    //   cout<<marks[3]<<endl;

    //   cout<<"These are mathmarks"<<endl;
    //   cout<<mathmark[0]<<endl;
    //   cout<<mathmark[1]<<endl;
    //   cout<<mathmark[2]<<endl;
    //   cout<<mathmark[3]<<endl;
    // //   you can change the value of array
    //   marks[1]=100;
    //   cout<<marks[0]<<endl;
    //   cout<<marks[1]<<endl;
    //   cout<<marks[2]<<endl;
    //   cout<<marks[3]<<endl;
    for (int i = 0; i <4; i++)
    {
        cout<<"The value of marks " <<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}