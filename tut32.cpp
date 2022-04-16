#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << " , " << y << ")" << endl;
    }
};
// void distanceBPoint(){
//     cout<<"Distance between two point is "<<
// }
int main()
{
    point p(3, 4);
    p.displayPoint();
    point q(8, 9);
    q.displayPoint();

    return 0;
}