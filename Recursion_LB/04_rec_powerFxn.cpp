#include<iostream>
using namespace std;
float power(int x ,int n){
    if(n==0)return 1;
    return x*power(x , n-1);
}
int main(){
    int x,n;
    cin>>x>>n;
    if(n>=0){
    float ans = power(x,n);
    cout<<ans<<endl;}
    else{
        n = -n;
    float  ans = power(x,n);
        cout<<1/ans<<endl;
    }
}