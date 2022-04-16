#include <iostream>
using namespace std;

class c2;
class c1
{
    int val1;

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    void inData(int a)
    {
        val2 = a;
    }
    friend void exchange(c1 &, c2 &);
    void display(void)
    {
        cout << val2 << endl;
    }
}; /*
 Trick to swap 2 number a and b
 int temp = a;
        a = b;
        b = temp;
 */
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(25);
    oc2.inData(45);

    exchange(oc1, oc2);

    cout << "The value of exchange of c1 becomes : ";
    oc1.display();
    cout << "The value of exchange of c2 becomes : ";
    oc2.display();

    return 0;
}