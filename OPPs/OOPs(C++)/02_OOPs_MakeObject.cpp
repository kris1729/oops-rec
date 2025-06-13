#include <iostream>
using namespace std;

class Anilmal
{
private:
    // all is private(Defalt case)
protected:
    // all is proctected
public:
    string name;
    int age;

    void eat()
    {
        cout << "Can be eat" << endl;
    }
    void slep()
    {
        cout << "Can be sleep" << endl;
    }
};

int main()
{
    Anilmal lion;
    lion.name = "Rockey";
    cout<< lion.name << endl;
    lion.slep();
}