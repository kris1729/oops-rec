// print all the unique combination which sum is k
// leet code 90

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &temp)
{
    for (auto x : temp)
        cout << x << " ";
    cout << endl;
}

void solve(vector<vector<int>> &ans, vector<int> &v, vector<int> temp, int i, int k)
{

    if (k == 0)
    {
        print(temp);
        return;
    }

    for (int j = i; j < v.size(); j++)
    {
        if (j > i && v[j] == v[j - 1])
            continue;
        if (v[j] > k)
            break;

        // take
        temp.push_back(v[j]);
        solve(ans, v, temp, j + 1, k - v[j]);
        temp.pop_back();
    }
}
int main()
{

    vector<int> v = {10, 1, 2, 7, 6, 1, 5};
    int k = 8;

    // solve
    sort(v.begin(), v.end());

    vector<vector<int>> ans;
    vector<int> temp;

    solve(ans, v, temp, 0, k);
}