#include<iostream>
#include "bird.h"
using namespace std;

void birdDoSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->sleep();

}
int main(){

    Bird*spar = new sparrow();
   // sparrow *sp = new sparrow();
//    sp->eat(); // give error not excess sparrow but excess bird only

    spar->eat();

    Bird*peck = new pecock();

    Bird*par = new parrot();

    // Bird*br = new Bird();
    // aap nai bna sakte kioki ye only bird hai 
    // aap use define krege (IMP)


    birdDoSomething(spar);
    birdDoSomething(peck);
    birdDoSomething(par);



}
