// child class inheriate the properties from parents(Super/base/drive) class.

#include <iostream>
using namespace std;
class Animal {
    public:
    int age ;
    
    void sleep(){
        cout<<"Can be Sleep."<<endl;
    }
};

class Dog: private Animal{
    public:
    void getSleep(){
        return this->sleep();
    }

} ;
int main(){
    Dog rockey;
    rockey.getSleep();

}
