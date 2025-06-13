// Single level Inheitence
// Multilevel Inheritence(GrandFater --> father--> Son ---->  ...)

// mutilevl
#include<iostream>
using namespace std;
class Human{
    public:
    string name;
    int age;
};
class Indian: public Human{
    public: 
    string countryName;

};
class State : public Indian{
    public:
    string StateName;
};

int main(){
    State upPeople;
    upPeople.name ="RAJ" ;
    cout<<upPeople.name<<endl;
    
}

