// change const

#include <iostream>
using namespace std;
int main()
{

    int const *x = new int(12);
    // Data const but Pointer is not..
    // or
    const int *y = new int(12);

    cout << *x << endl; // 12

    // error to change like this
    //  *x = 13;

    // no error

    int b = 20;
    x = &b;

    cout << *x << endl; // 20

    int *const z = new int(2);
    // Pointer const but Data is not 
    *z = 5;
    cout << *z << endl; // 5

    const int *const a = new int(2);
    // data and pointer both const
    // nothing is changable
}
