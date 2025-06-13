#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[],int n , int i,int &mini){
  if(i>=n)return;
  if(arr[i]<mini){
    mini = arr[i];
  }
 return findMax(arr,n,i+1,mini);
   

}

int main(){
    int n =10;
    int arr[n] = {2,25,46,1,23,12,60,44,3333,2};
    int mini = INT_MAX;
    findMax(arr,n,0,mini);
    cout<<mini<<endl;
}