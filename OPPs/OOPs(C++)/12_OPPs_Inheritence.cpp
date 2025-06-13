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
// class CHILD: modeOfInheritence PARENT{};
class Dog: public Animal{

} ;
int main(){
    Dog rockey;
    rockey.sleep();

}
/*
---------------------------------------------------------------
Parent class     |              mode OF Inheritence           |
    ka           |--------------------------------------------|
 Acess Modificer |    public          protected       private |
---------------------------------------------------------------
1-> public          public         protected         private  
2-> protected       protected       protected         private
3-> private         NA              NA                NA

*/