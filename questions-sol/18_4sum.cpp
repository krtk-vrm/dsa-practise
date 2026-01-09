/*Approach - fix two index and find the other two using 2sum.
TC is O(n^3)
SC is O(1)
*/
typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> out;
        for (int j = 0; j < n - 3; j++) {
            if ((ll)nums[j] + nums[j + 1] + (ll)nums[j + 2] + nums[j + 3] >
                target)
                break;
            ll maxJ = (ll)nums[j] + nums[n - 1] + nums[n - 2] + nums[n - 3];
            if (maxJ < target)
                continue;
            if (j > 0 && nums[j] == nums[j - 1])
                continue;
            for (int i = j + 1; i <= n - 3; i++) {
                if ((ll)nums[j] + nums[i + 1] + (ll)nums[i + 2] + nums[i] >
                    target)
                    break;
                ll maxI = (ll)nums[j] + nums[i] + nums[n - 1] + nums[n - 2];
                if (maxI < target)
                    continue;
                if (i > j + 1 && nums[i] == nums[i - 1])
                    continue;

                int l = i + 1, r = n - 1;
                while (l < r) {
                    ll sum = (ll)nums[i] + nums[l] + (ll)nums[r] + nums[j];

                    if (sum == target) {
                        out.push_back({nums[j], nums[i], nums[l], nums[r]});
                        l++;
                        r--;

                        while (l < r && nums[l] == nums[l - 1])
                            l++;
                        while (l < r && nums[r] == nums[r + 1])
                            r--;
                    } else if (sum < target)
                        l++;
                    else
                        r--;
                }
            }
        }
        return out;
    }
};