// ek n lenght ka road hai .. max no of segement of 
// lenght(x|y|z)lengths.


#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int>&v,int n){
      
    if(n==0)return 0;
    if(n<0)return INT_MIN;
    int maxi = INT_MIN;
    for(int i =0;i<v.size();i++){
       int  ans = Solve(v, n-v[i]);
    maxi = max(maxi , ans+1);
    }
    return maxi;

}

int main(){
    
    vector<int>xyz{3,5,3};
    int rod = 8;
    int p = Solve(xyz,rod);
    if(p<0)p=0;
    cout<<p<<endl;
}