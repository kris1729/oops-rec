#include<iostream>
using namespace std;

int fect(int n ){
    if(n<=1)return 1;
    return n*fect(n-1);
}

int main(){
    int n;
    cin>>n;
int fectans = fect(n);
cout<<fectans<<endl;
}