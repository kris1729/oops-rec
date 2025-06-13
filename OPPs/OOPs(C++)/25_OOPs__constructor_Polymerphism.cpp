#include<iostream>
using namespace std;


class Animal {
    public:
    Animal(){
        cout<<" call Animal constructor"<<endl;
    }
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public : 
    // override
     Dog(){
        cout<<" call Dog constructor"<<endl;
    }
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){

Animal* a = new Animal();// call Animal constructor
Dog * b =  new Dog(); // call Animal constructor
                    // call Dog constructor

Animal* c = new Dog(); // call Animal constructor
                        // call Dog constructor

Dog* d = (Dog*) new Animal(); // call Animal constructor


}