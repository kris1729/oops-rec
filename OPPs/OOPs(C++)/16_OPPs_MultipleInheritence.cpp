// multiple Inheritence
#include<iostream>
using namespace std;
class A{
    public:
    string physics;
};
class B{
    public:
    string chemistry;

};

// --------

class c : public A , public B {
    public:
    string math;
};
int main(){
    c subject;
    subject.chemistry="ch";
    subject.physics= "ph";
    cout<<subject.physics<<endl;
}