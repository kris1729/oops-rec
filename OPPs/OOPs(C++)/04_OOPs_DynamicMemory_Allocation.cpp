#include <iostream>
using namespace std;

class Fruit
{
public:
    string color;
    int life;
    bool IsHealthy()
    {
        if (this->life > 10)
            return false;
        else
            return true;
    }
};

int main()
{

    Fruit Apple; // static MemoryAallocation
    Apple.color = "red";
    cout << Apple.color << endl;

    Fruit *Orange = new Fruit; // Dynamic MemoryAllocation
    Orange->color = "Orange";
    Orange->life = 5; // Dot Operater not work
    cout << Orange->color << endl;
    cout << (*Orange).life << endl;
    cout << Orange->IsHealthy() << endl;
}