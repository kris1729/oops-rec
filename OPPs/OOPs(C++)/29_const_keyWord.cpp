// const keyword use to declare immutable variable,fxn,or objects
// can't change after initalisation


#include<iostream>
using namespace std;

int main(){
    const int x = 5;
    cout<<x<<endl;

    // error
    // x = 6;



    // agr change krna ho (old  c++ compiler)


   /*
   int *p = &x;
   *p = 14;
   cout<<x<<endl;
   */

}
/*
in c++

1.(Lvalve)---> which have memory allocation --> EX. int,float

2>(RValve) -- > which have not memory allocation --> 
Ex. --> const x =5 , int &a = 5;


*/

