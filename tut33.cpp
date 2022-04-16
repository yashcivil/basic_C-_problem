#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c(4, 6);
    c.printnumber();

    complex c2(4);
    c2.printnumber();

    complex c3;
    c3.printnumber();

    return 0;
}