#include <iostream>
using namespace std;

class Employee
{
    int id;
    int sallary;

public:
    void setId(void)
    {
        sallary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee yashcivil, ram, shyam, rohan;
    //  yashcivil.setId();
    //  yashcivil.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}