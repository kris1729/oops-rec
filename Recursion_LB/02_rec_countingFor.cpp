#include<iostream>
using namespace std;
void printcounting(int n){
    
    if(n<=0)return;
    printcounting(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    printcounting(n);
}


