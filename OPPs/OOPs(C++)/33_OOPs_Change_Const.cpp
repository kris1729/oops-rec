// during declear use mutable keyword variable
// but not use this as a good programmer only debugging..

#include <iostream>
using namespace std;

class abc
{
    mutable int x;
    int y;

public:
    int getX() const
    {
        x = 10;
        return x;
    }
};

int main()
{
    abc ab;
    cout << ab.getX();
}
