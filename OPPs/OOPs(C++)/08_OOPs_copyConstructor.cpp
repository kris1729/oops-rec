// it is a defalt constructor (shallow copy)
// when we make copy constructor (deep copy)

#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;

    // defalt constructor
    Human()
    {
        cout<<"call defalt"<<endl;
        // it should be preset.
    }

    // copy Constructor.
    Human(Human &obj) // call by REFERENCE always 
    //else Infinity Loop to make copy all time
    {
        this->name = obj.name;
        this->age = obj.age;
        cout<<"call copy "<<endl;
    }
};
int main()
{
    Human ram; // call defalt
    ram.age = 16;
    Human shyam = ram; // call copy
    cout << shyam.age << endl;//16
    Human anil(ram); // call copy
    cout << anil.age << endl; // 16
}


// Home work
// const keywoord , static variable and function , iniliatisation of list