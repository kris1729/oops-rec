#include <iostream>
using namespace std;
void printAllSubSuq(string str, int n, int i, string ans)
{
    if (i >= n)
    {
        cout << ans << " ";
        return;
    }
    // exclude
    printAllSubSuq(str, n, i + 1, ans);
    // endclude
    ans += str[i];
    printAllSubSuq(str, n, i + 1, ans);

    /*
    ans+=str[i];
    printAllSubSuq(str,n,i+1,ans);
    ans.pop_back();

    printAllSubSuq(str,n,i+1,ans);

   */
}

int main()
{
    string str = "abc";
    int n = str.size();
    string ans = "";
    printAllSubSuq(str, n, 0, ans);
}