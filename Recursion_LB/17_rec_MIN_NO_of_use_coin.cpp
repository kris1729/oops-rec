// the min no of coin to make n rup {coin is {1,2,3,7}}



#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>&v,int n){
      
    if(n==0)return 0;
    if(n<0)return INT_MAX;
    int mini = INT_MAX;
    for(int i =0;i<v.size();i++){
       int  ans = Solve(v, n-v[i]);
       if(ans!=INT_MAX) // ans ko phatne se bachana hai
        mini = min(mini , ans+1);
    }
    return mini;

}

int main(){
    
    vector<int>v{1,2,5,7};
    int target = 10;
    int p = Solve(v,target);
    cout<<p<<endl;
}