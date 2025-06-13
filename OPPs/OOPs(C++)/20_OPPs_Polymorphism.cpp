// exist in meny from...
// same naam ke function banana

// type -- Compile time polymorphism  and Runtime 

//1.. compile time (function overloading and Operation overloading)

#include<iostream>
using namespace std;

class math{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a , int b , int c){
        return a+b+c;
    }
    float sum(int a , float b){
        return a+b;
    }

    // note fnx can be differ on the basic of Argument Only
    // in function overloading
};


int main(){

    math oper;

    cout<<oper.sum(2,3,4)<<endl; // 9

    cout<<oper.sum(2,2.2f)<<endl; // 4.2
}

