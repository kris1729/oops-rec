#include<iostream>
using namespace std;

 void printArrayFor(int a[],int i , int n){
    if(i>=n)return;
    cout<<a[i]<<" ";
    printArrayFor(a,i+1,n);

}

void printArrayBack(int a[],int i , int n){
    if(i>=n)return;
    printArrayBack(a,i+1,n);
    cout<<a[i]<<" ";

}
int main(){
    int n = 10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    printArrayFor(a,0,n);
    cout<<endl;
    printArrayBack(a,0,n);
}