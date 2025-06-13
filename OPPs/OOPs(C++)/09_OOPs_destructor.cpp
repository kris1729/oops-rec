// Use to free the Memory...
// in static memory call autometacally and dynamic have to call manualy

// defult destructor in static memory allcation...

#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    ~Animal(){
        cout<<"delete static object"<<endl;
    }
};
int main()
{

    Animal lion; 
    return 0;

    // output  (delete static object)
}