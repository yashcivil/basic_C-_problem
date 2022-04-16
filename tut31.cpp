#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // Declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) // Default constructor as it accepts no parameters
{
    a = 10;
    b = 0;
}

int main()
{
    complex c;
    c.printNumber();
    return 0;
}