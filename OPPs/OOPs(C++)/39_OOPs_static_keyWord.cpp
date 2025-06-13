// class ---> Multiple instances (objects)
#include <iostream>
using namespace std;
class cl
{
public:
    int x;
    int y;

    void print()
    {
        // hidden parameter this paas ho rha hai
        cout << x << " " << y << endl;
    }
};
int main()
{
    cl a = {1, 2},b={2,4};
    a.print();
    b.print();

    // sabkha  this alg alg hai menas sabhi obj ke paas
    // ek x hai aur ek y hai 
}

// static data member ..

// who share the memory with all the instances 

// sabhka (objs) ka x ek hai aur y bhi ek hai
