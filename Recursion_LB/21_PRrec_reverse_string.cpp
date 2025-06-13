#include <iostream>
using namespace std;

void solve(string &str, int i, int j)
{
    if (i >= j)
        return;
    swap(str[i], str[j]);
    solve(str, i+1, j-1);
}
int main()
{
    string str = "rajabhaiya";
    solve(str, 0, str.size() - 1);
    cout << str << endl;
}

/*

#include<iostream>
using namespace std;
void solve(string &str , string &revStr,int i){
    if(i>=str.size())return ;

    solve(str,revStr,i+1);
    revStr+=str[i];
}

int main(){
    string str = "rajabhaiya";
    string revStr = "";
    solve(str,revStr,0);
    cout<<revStr<<endl;
}
*/