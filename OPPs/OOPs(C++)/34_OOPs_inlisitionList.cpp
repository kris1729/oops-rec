// leave old mathod of inlistlision
// new style of constructor writing

#include <iostream>
using namespace std;
// old style constructor not inlitision the "const" variable..(IMP)

class abc
{
    int x;
    int *y;
    const int z;

public:
// list inlit...
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z)
    { /*something*/
    }
};
int main()
{
    abc obj(1, 2);
}