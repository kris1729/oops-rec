#include<iostream>
using namespace std;
bool cheakSorted(int arr[],int n , int i){
    if(i>=n)return true;
    if(arr[i]>arr[i+1])return false;
    cheakSorted(arr,n,i+1);
}
int main(){
    int n =10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {3,1,2,4,6,5,7,8,10,8};
    if(cheakSorted(a,n,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    if(cheakSorted(b,n,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}