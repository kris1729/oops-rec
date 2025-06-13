// it is a defalt constructor 

#include<iostream>
using namespace std;

class Human {
    public:
    string name ;
    int age;
};
int main(){
    Human ram;
    ram.age = 16;
    Human shyam = ram;
    Human anil(ram);

    cout<<shyam.age<<endl; // 16 
    ram.age = 18;
    cout<<shyam.age<<endl; // 16
    cout<<anil.age<<endl; // 16
    
    
}