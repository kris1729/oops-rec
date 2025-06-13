#include<iostream>
using namespace std;

// jaisa object waisa behaviour

class Animal {
    public:
   virtual
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public : 
    // override
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){

    Animal* rocky = new Dog();
    rocky->speak(); // barking

    Dog* shera = (Dog*) new Animal();
    shera->speak(); // speaking


}