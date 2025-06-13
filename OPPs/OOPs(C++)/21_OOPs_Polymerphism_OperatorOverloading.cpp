// home Work..(chart of operater overloading )
//Operater Overloading(+ se - bala kaam krana)
// whyuse to print (acess) all properties of object..(home hork)(<<,>>)
// home work (object ko print krne pe puri properties print ho jaye)



// object1 + object2 ==== object1.+(object2)
#include<iostream>
using namespace std;

class num{
    public:
    int val;
    int operator +(num& obj2){
        int diff = this->val - obj2.val;
        return diff;
    }
};

int main(){

    num A,B;
    A.val = 5;
    B.val = 2;

    cout<<A+B<<endl; // 3



}
 


 


