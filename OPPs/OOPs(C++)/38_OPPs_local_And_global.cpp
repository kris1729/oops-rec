#include<iostream>
using namespace std;

int x = 3; // global

int main(){
    int x = 5;
    cout<<x<<endl; // 5 (local)

    cout<<::x<<endl; // 3 global
    {
        int x = 50 ;
        {
            int x  = 60;
            cout<<x<<endl; // 60 most local
        }
        cout<<x<<endl; // 50 most local
        cout<<::x<<endl; // 3 

    }
}
