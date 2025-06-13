#include <bits/stdc++.h>
using namespace std;

void solve(string str, int i, char ch, int &ans)
{
    if (i < 0)
        return;
    if (str[i] == ch)
    {
        ans = i;
        return;
    }
    solve(str, i - 1, ch, ans);
}
int main()
{
    string str = "oooooooooooooooooohooooooooooo";
    char ch = 'h';
    int ans = -1;
    solve(str, str.size() - 1, ch, ans);
    cout << ans << endl;


    
}