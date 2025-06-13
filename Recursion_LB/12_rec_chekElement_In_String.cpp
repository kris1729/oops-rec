#include<iostream>
using namespace std;
int cheak(string str , int n , char el , int i){
    if(i>=n)return -1;
    if(str[i]==el)return i;
    return cheak(str,n,el,i+1);
}

int main(){
    string str = "lovebabber";
    int n = str.size();
    char el = 'r';
    int ans = cheak(str,n,el,0);
    cout<<ans<<endl;
}