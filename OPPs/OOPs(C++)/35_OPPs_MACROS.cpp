// pre processor
// #define 


#include<iostream>
using namespace std;
#define PI 3.1423223
#define maxx(x,y)(x>y?x:y)
// ye vriable nahi hai
// resauseblity and sortcut and simplify
// priprocess krega aur jaha jaha pe ye define hai waha pe rakh dega 

float area(float r){
    float ans =  PI*r*r;
    return ans;
}

int main(){
    float a = 7;
    cout<<area(7)<<endl;
    cout<<maxx(2,3)<<endl;
}