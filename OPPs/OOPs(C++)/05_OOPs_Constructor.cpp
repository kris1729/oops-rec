// Constructor..

/*

 IS a Function Without return type
 Which Name === Class Name
 Which Work === Inlitision of Object

 */

#include <iostream>
using namespace std;

class Vegitable
{
public:
    string color;

   
   // defalt constructor 
    Vegitable()
    {
        cout << "call itself self" << endl;
    }
};
int main()
{

    Vegitable *patato = new Vegitable;
    Vegitable Onian;
}