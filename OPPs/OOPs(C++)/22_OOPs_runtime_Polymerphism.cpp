// int this ( Function overRiding)
// inherite function ko costom desine kru

#include<iostream>
using namespace std;
 class Animal {
    public:
    int age;
    void speak(){
        cout<<"Can be speak !!";
    }
 };

 class Dog : public Animal{
    public:
    void speak(){
        cout<<"Can be bark"<<endl;;
    }
 } ;

 class Cat : public Animal{
   public:
   void speak(){
      cout<<"Meo Meo"<<endl;
   }
 };

 int main(){

    Dog Rockey;
    Rockey.speak(); //Can be bark

    Cat coffiee;
    coffiee.speak(); // Meo Meo

    cout<<Rockey.age<<endl;//4201035
 }

