#include<iostream>
using namespace std;
void printAlldigit(int n){
    if(n==0)return;
    printAlldigit(n/10);
    cout<<n%10<<" ";

}
int main(){
    int n;
    cin>>n;
    printAlldigit(n);

}