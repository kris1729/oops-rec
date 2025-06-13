// imp
// Shallow == hellow (Khokhla )
// uper uper se copy shallow if you copy the content
// also ( ander ander ) is deep copy
#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;
    // smart deep copy
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    void print() const
    {
        printf("X:%d\nPTR: %p\nconstant of y : %d\n\n", x, y, *y);
    }

    ~abc(){
        delete y;
    }
};
int main()
{
    abc obj(1, 2);
    abc obj2(obj);
    obj.print();
    obj2.print();

    *obj2.y = 12;
    obj.print();  // y = 2
    obj2.print(); // y = 12

    delete obj.y;



}