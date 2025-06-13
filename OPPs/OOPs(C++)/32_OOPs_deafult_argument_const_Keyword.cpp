#include <iostream>
using namespace std;

class abc
{
    int x;
    int *y;
    int z;

public:
// defalt constructor
    abc(int x = 0, int y = 0, int z = 0)
    {
        this->x = x;
        this->y = new int(y);
        this->z = z;
    }
    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return *y;
    }
    int getZ() const
    {
        return z;
    }
};
void printXYZ(const abc &obj)
{
    // note all get function(get/set) should be const else give error
    // because object is paas with const keyWorkd
    cout << obj.getX() << " " << obj.getY() << " " << obj.getZ() << endl;
}
int main()
{
    abc b(1, 2);
    abc d(1, 2, 3);

    printXYZ(b); // 1 2 0
    printXYZ(d); // 1 2 3
}