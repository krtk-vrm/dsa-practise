/* One of my favourtite problem so far :)

Approach - use sweeping technique to check freq at left and right
and count them by mupltiplying left_count*right_count

TC O(n)
SC O(1)
*/
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MAXV = 100001, n = nums.size();
        const int mod = 1e9 + 7;
        int freq[MAXV] = {0}, prev[MAXV] = {0};
        for (int x : nums)
            freq[x]++;
        long long count = 0;
        prev[nums[0]]++;
        for (int i = 1; i < n - 1; i++) {
            const int x = nums[i], x2 = 2 * x;
            if (x2 < MAXV)
                count += (long long)prev[x2] * (freq[x2] - prev[x2] - (x == 0));
            prev[x]++;
        }
        return count % mod;
    }
};