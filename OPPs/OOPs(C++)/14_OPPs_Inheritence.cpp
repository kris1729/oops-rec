
#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int weight;
    string countryname;
    string color;
    string language;

    void sleep()
    {
        cout << "YES Sleeping ." << endl;
    }
};

class American : public Human
{

public:
    American()
    {
        this->countryname = "America";
        this->color = "white";
        this->language = "English";
    }
};

class Indian : public Human
{
public:
    Indian()
    {
        this->countryname = "India";
        this->color = "Wheat brown";
        this->language = "Hindi";
    }
};
int main()
{
    Human raja;
    raja.sleep();
    raja.name = "raja";
    cout << raja.name << endl;
    Indian anil;
    anil.name = "Anil";
    American ford;
    ford.name = "ford";

    cout << anil.name << " " << anil.countryname << " " << anil.language << endl;
    anil.sleep();

    cout << ford.name << " " << ford.countryname << " " << ford.language << endl;
    ford.sleep();
}
