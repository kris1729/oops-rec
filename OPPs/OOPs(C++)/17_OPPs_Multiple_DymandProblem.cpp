#include<iostream>
using namespace std;
class A{
    public:
    string chemistry;
};
class B{
    public:
    string chemistry;

};

class c : public A , public B {
    public:
    string math;
};
int main(){
    c subject;
    subject.B::chemistry="ch";
   
    cout<<subject.A::chemistry<<endl;  // NA
    cout<<subject.B::chemistry<<endl;   // ch
}