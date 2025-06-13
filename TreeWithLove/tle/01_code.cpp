#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
#define F first
#define S second
#define pub push_back
#define pob pop_back
const int  mod = 1e9+7;

ll get_hash(string s){
    ll h =0;
    for(char c: s) h = (h*31 + (c-'a'+1))%mod;
    return h;
}
 
int  main() 
{
string str = "hhp";
string str1 = "hhhpjdfkhjkhdjhkdjhkhdjhkdkdsjhbksdh";
 cout<<get_hash(str)<<endl;
 cout<<get_hash(str1)<<endl;

 
}