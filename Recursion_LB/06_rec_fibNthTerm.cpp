#include<iostream>
using namespace std;
int printfib(int n){
    if(n<=1)
      return n ;
     return printfib(n-1)+printfib(n-2);
    
}
int main(){
    int n;
    cin>>n;
    cout<<printfib(n)<<endl;

}