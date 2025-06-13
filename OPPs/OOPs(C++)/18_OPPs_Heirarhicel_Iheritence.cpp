#include<iostream>
using namespace std;
class Human{
    public:
    string name;
    int age;
};

class female : public Human{
    public:
    string hairSize = "long";
};

class male:public Human{
    public:
    string hairSize = "small";
};

int main(){
    
    female radha;
    male Krishna;

    cout<<radha.hairSize<<endl; // long
    cout<<Krishna.hairSize<<endl; // small
} 