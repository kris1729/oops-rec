// leet code 198

// concpt non adjsent sum
// TLE aa rha hai dp lagegi

// time com O(2^N)

/*


class Solution {

public:
    void solve(vector<int> v, int i, int sum, int& maxi) {
        if (i >= v.size()) {
            maxi = max(sum, maxi);
            return;
        }

        // include (concept)
        solve(v, i + 2, sum + v[i], maxi);
        // exclude
        solve(v, i + 1, sum, maxi);
    }
    int rob(vector<int>& v) {
        int sum = 0;
        int maxi = INT_MIN;
        solve(v, 0, sum, maxi);
        return maxi;
    }
};


// TLE AA RHI HAI

*/