 #include<iostream>
 using namespace std;

 // if you make a mathod made (const) then it's can't change other member
 
 class abc{
    int x;
    int *y;
    public:

    abc(){
        x = 0;
        y = new int(0);
    }

    int getX() const
    {
        // x=5  (give error)
        return x;
    }
    int setX(int val){
        x = x;
    }

    int getY() const
    {
        return *y;
    }
    int setY(int val){
        *y = val;
    }

 };
 int main(){
    abc a;

     // all get mathod does not change the other member of class
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;

    // 
 }