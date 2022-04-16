//   OOps - Classes and objects

//   C++ --> initially called --> C with classes by strousstroup
//   C ---->extention of structures (in c)
//   Steructure have a limitations
//    --->members are public
//    ---> No methods
// classes =structures + more
// classes---.can have methods and propeties
// classes--> can make few member as privat & few as public

#include <iostream>
using namespace std;

class binary
{
    // privat:
    string s;

public:
    void read(void);
    void check_bin(void);
    void ones_complement(void);
    void Display(void);
};
void binary ::read(void)
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}
void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::Display(void)
{
    cout << "Display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{

    binary b;
    b.read();
    b.check_bin();
    b.ones_complement();
    b.Display();
    return 0;
}