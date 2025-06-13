// in dynamic memory allocation
#include<iostream>
using namespace std;

// behaviour of pointer 

class Animal {
    public:
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

Animal* a  = new Animal();
a->speak() ; // speaking 
Dog *b = new Dog();
 b->speak(); // barking 


// upcasting 
Animal* rockey = new Dog();
rockey->speak(); // speaking 

// downcasting
// Dog* Shera = new Animal(); actual syntex

Dog* Shera = (Dog*)new Animal(); 
 Shera->speak();  // barking




}