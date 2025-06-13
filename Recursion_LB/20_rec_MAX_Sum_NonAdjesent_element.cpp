// ek array diya gya hai max sum nikalna hai non adjsent element ka..

// innclude and exclude
// include me ( i = i+2)krna hai



// IMPORTANT
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> v, int i, int sum, int &maxi)
{
    if (i >= v.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include (concept)
    solve(v, i + 2, sum + v[i], maxi);
    // exclude
    solve(v, i + 1, sum, maxi);
}

int main()
{
    vector<int> v{1, 2, 4, 9, 11};
    int sum = 0;
    int maxi = INT_MIN;
    solve(v, 0, sum, maxi);
    cout << maxi << endl;
}
