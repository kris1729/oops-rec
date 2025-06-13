// print all the subsequence

// APP --> start ko 0 rkhege aur end ko baar baar badate jayege


#include<bits/stdc++.h>
using namespace std;

void printAll(string &str , int st,int end , vector<string>&v){
    if(end >str.size())return;
    string subst = str.substr(st,end);
    v.push_back(subst);
    printAll(str ,st, end+st+1,v);

}
int main(){
    string str = "abcdeghi";
    int end  = 0;
    vector<string>v;
    for(int  st =0;st<str.size();st++)
    printAll(str,st,end+st, v);

    for(auto x: v)cout<<x<<" ";
    return 0;

    /*
     a ab abc abcd abcde abcdeg abcdegh 
     abcdeghi b bcd bcdeg bcdeghi cd cdegh
      cdeghi deg deghi eghi ghi hi i 
    */
}
