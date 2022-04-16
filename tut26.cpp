// Count is the static data member of class employee
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int Count;

public:
    void setData(void)
    {
        cout << "Enter the Id 0f this employee" << endl;
        cin >> id;
        Count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << Count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<Count<<endl;
    }
};
int Employee::Count = 1000; // Default value is 0
int main()
{
    Employee yash, ram, shyam;
    // yash.id = 1;
    //  yash.count; //can not do this as id and count are privat

    yash.setData();
    yash.getData();
    Employee::getCount();

    ram.setData();
    ram.getData();
    Employee::getCount();

    shyam.setData();
    shyam.getData();
    Employee::getCount();

    return 0;
}