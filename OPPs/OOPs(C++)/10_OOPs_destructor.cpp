#include<iostream>

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

    Animal *lion = new Animal;

delete lion; // have to manual delete in dynamic case
    return 0;

   
}