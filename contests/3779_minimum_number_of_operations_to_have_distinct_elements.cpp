class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int x : nums) freq[x]++;

        int dup = 0;
        for (auto &p : freq)
            if (p.second > 1) dup++;

        int ops = 0;
        int i = 0, n = nums.size();

        while (i < n && dup > 0) {
            ops++;

            int take = min(3, n - i);
            for (int k = 0; k < take; k++) {
                int x = nums[i++];
                if (--freq[x] == 1) dup--;
            }
        }

        return ops;
    }
};
