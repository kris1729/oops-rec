#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;

    Human(){
        this->name = "";
        this->age = 0;
        cout<<"call Defalt"<<endl;
    }

    // parametric constructor..
    Human(string name)
    {
        this->name = name;
        cout << "call first" << endl;
    }
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout<<"Call second ";
    }


};

int main()
{
  
 Human raj; // call Defalt
 Human anil("anil"); // call First
 Human soni ("soni",17); // call Second


}