#include <iostream>
using namespace std;

class Animal
{
    string name;
    int age;

public:
    string getName()
    {
        return this->name;
    }

    void setName(string newname)
    {
        this->name = newname;
    }
};

int main()
{
    Animal Monkey;
    Monkey.setName("Raja");
    cout<<Monkey.getName()<<endl; 
}