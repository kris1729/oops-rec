// this is not more useful consept it ask in INTERVIEW ...

/*

age kisi class ka friend koi function ya koi class hai to wh class/function
use class ke private member  ko access kr sakte hai

*/

#include <iostream>
using namespace std;

class A
{
private:
    int x;
    int y;

public:
    A(int x,int y)
    {
        this->x = x;
        this->y = y;
    }

    friend class B;
    friend void print(A &);
};

// Bexcess tbe class
class B
{
public:
    void printt(const A &a)
    {
        cout << a.x << endl;
    }
};


void print( A &a){
    cout<<a.y<<endl;
}

int main()
{
    A a(5,6);
    B b;


    b.printt(a); // 5
    print(a);    // 6

}