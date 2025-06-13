// leet Code 216 combination sum III

// unique combination of k length which sum is n

#include<bits/stdc++.h>
using namespace std ; 

void print(vector<int>&temp){
    for(auto x : temp)
    cout<<x<<" ";
    cout<<endl;
}
void solve(vector<vector<int>>&ans,vector<int>&v,vector<int>temp,int n , int k ,int i){
    if(temp.size()==k && n == 0){
        print(temp);
        return;
    }
    if(i >=v.size())return ;

    // take v[i]
    temp.push_back(v[i]);
    solve(ans , v, temp, n-v[i],k,i+1);
    temp.pop_back();

    // no take

    solve(ans , v , temp, n, k ,i+1);
}

int  main() 
{
    int n = 15;
    int k = 4;

    // solve 
vector<int>v{1,2,3,4,5,6,7,8,9};
    vector<vector<int>>ans;
    vector<int>temp;
solve(ans,v,temp,n,k,0);



 
}