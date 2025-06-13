#include<iostream>
using namespace std;

bool cheakPl(string &str , int i ,int j){
    if(i>=j)return true;
    if(str[i]!=str[j])return false;
    return cheakPl(str,i+1,j-1);
}

int main(){

    string str = "abcba";
    cout<<cheakPl(str,0,str.size()-1)<<endl; // true
}