#include <iostream>
using namespace std;

// sabka ek hi x aur ek hi y kisi ka alag alag nahi 
class abc
{
public:
    static int x, y;

    void print() const
    {

        cout << x << " " << y << endl;
    }
// int static member function no instance are pass 
    // static function me kisi obj ko acess nahi kr payege
};
int abc::x;
int abc ::y;

int main()
{

    abc obj1;
    abc obj2;
    obj1.x = 2;
    obj1.y = 3;
    obj1.print(); // 2 3
    obj2.print(); // 2 3

    obj1.x = 6;
    obj1.y = 7;
    obj1.print(); // 6 7
    obj2.print(); // 6 7

    return 0;
}