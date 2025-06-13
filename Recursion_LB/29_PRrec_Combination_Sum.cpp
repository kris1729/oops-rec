// leet Code 39

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> p)
{
   for (auto x : p)
      cout << x << " ";
   cout << endl;
}

void solve(vector<int> &v, int i, vector<int> &ans, int k, vector<vector<int>> &last)
{

   if (i == v.size())
   {
      if (k == 0)
         last.push_back(ans);

      return;
   }
   // take
   if (k >= v[i])
   {
      ans.push_back(v[i]);
      solve(v, i, ans, k - v[i], last);
      ans.pop_back();
   }
   // no take

   solve(v, i + 1, ans, k, last);
}

int main()
{
   vector<int> v = {1, 2, 7, 4, 3};
   vector<int> ans;
   vector<vector<int>> last;
   int sum = 0;
   int k = 5;
   solve(v, 0, ans, k, last);



   

   for (auto x : last)
   {
      print(x);
      cout << endl;
   }
}