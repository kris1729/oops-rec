#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[],int n , int i,int &maxi){
  if(i>=n)return;
  if(arr[i]>maxi){
    maxi = arr[i];
  }
 return findMax(arr,n,i+1,maxi);
   

}

int main(){
    int n =10;
    int arr[n] = {2,25,46,1,23,12,60,44,3333,2};
    int maxi = INT_MIN;
    findMax(arr,n,0,maxi);
    cout<<maxi<<endl;
}