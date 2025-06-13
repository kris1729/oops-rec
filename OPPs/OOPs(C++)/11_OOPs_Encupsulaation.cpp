// data hiding 
// value ko wrap kar dena ...
#include<iostream>
using namespace std;
class Human{
    private:
       int age ;
       int weight;
       int id;
    public:
       bool IsHealthy(){
         if(weight>80)return false;
         else return true;
       }
    int getAge(){
        return this->age;
    }
    void SetAge(int age){
        this->age = age ;
    }
};

int main(){


// this is example of encapulation

    return 0;
    
}
 