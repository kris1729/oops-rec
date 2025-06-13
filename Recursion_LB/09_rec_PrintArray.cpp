#include<iostream>
using namespace std;

 void printArrayFor(int a[], int n){
    if(n==0)return;
    cout<<a[0]<<" ";
    printArrayFor(a+1,n-1);

}

void printArrayBack(int a[],int n){
    if(n==0)return;
    printArrayBack(a+1,n-1);
    cout<<a[0]<<" ";

}
int main(){
    int n = 10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    printArrayFor(a,n);
    cout<<endl;
    printArrayBack(a,n);
}