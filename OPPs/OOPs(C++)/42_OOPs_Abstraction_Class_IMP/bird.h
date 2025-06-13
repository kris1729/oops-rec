// very very useful



#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat()=0;
    virtual void sleep()=0;
    virtual void fly() =0;
    // jo class inherite kregi use ye sbhi
    // pure virtual fxn impliment krna pdega
    
};

class sparrow:public Bird{

    private:
    void eat(){
        std::cout<<"Sparrow is eating \n";
    }
     void sleep(){
        std::cout<<"Sparrow is sleeping \n";
    }
     void fly(){
        std::cout<<"Sparrow is flying \n";
    }

};

class pecock:public Bird{

    private:
    void eat(){
        std::cout<<"pecock is eating \n";
    }
     void sleep(){
        std::cout<<"pecock is sleeping \n";
    }
     void fly(){
        std::cout<<"pecock is flying \n";
    }

};
class parrot:public Bird{

    private:
    void eat(){
        std::cout<<"parrot is eating \n";
    }
     void sleep(){
        std::cout<<"parrot is sleeping \n";
    }
     void fly(){
        std::cout<<"parrot is flying \n";
    }

};



#endif // BIRD_H
