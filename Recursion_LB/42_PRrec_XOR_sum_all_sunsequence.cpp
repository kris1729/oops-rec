// leet code easy 1863

// XOR SUM Of ALL subsequence





#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> &nums, int i, int ans)
{
    if (i == nums.size())
        return ans;

    // include
    int ans1 = solve(nums, i + 1, ans ^ nums[i]);
    // exclude
    int ans2 = solve(nums, i + 1, ans);
    return ans1 + ans2;
}
int main()
{
    vector<int> nums = {1, 2, 3};

    cout << solve(nums, 0, 0);
}