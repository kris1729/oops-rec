#include<iostream>
using namespace std;

 void printArray(int a[],int n,int i){
    if(i>=n)return ;
    cout<<a[i]<<" ";
    printArray(a,n,i+1);

}
int main(){
    int n = 10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    printArray(a,n,0);
}