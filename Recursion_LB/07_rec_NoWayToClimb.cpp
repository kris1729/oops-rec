//  70. LeetCode..



#include<iostream>
using namespace std;
int climbStairWay(int n){

    if(n==0||n==1)return 1;

  int ans = climbStairWay(n-1)+climbStairWay(n-2);
  return ans;

}


int main(){
    int n;
    cout<<"Enter the NO of stairs"<<endl;
    cin>>n;
    cout<<"Total no of way "<<climbStairWay(n)<<endl;
}