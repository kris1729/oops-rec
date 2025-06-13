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

    // defalt copy constructor

    abc(const abc &ob)
    {
        x = ob.x;
        y = ob.y;
    }
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    void print() const
    {
        printf("X:%d\nPTR: %p\nconstant of y : %d\n\n", x, y, *y);
    }
};
int main()
{
    abc obj(1, 2);
    abc obj2(obj); // defalt call copy const then make shallow copy
                   //    abc obj2 = obj;
    obj.print();
    obj2.print();

    // note done ek hi lucation ko point kr rhe hai
    // so both are same
    *obj2.y = 12;
    obj.print();
    obj2.print();
    // both y is 12

    // IMP -->
    /*
        if we delete one of them
        then  automatic delete other pointer
        and after we delete other then error is
         double free malloc error */


        
}