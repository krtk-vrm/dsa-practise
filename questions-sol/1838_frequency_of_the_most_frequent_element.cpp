/*Approach - use sliding window technique with two pointers.The left pointer is like anchor which moves when the cost exceeds the
limit and right pointer is the window opener.
TC - O(n logn)
SC - O(1)
*/
#pragma GCC optimize("Ofast", "unroll loops")
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int maxf = 1;
        int l =0;
        sort(nums.begin(), nums.end());
        long long wsum = 0;
        for(int r = 0 ; r < nums.size() ; r++){
            wsum+=nums[r];
            while((long long)nums[r]*(r-l+1)-wsum>k){
                wsum-=nums[l++];

            }
            maxf = max(maxf, r-l+1);
        }
        return maxf;
    }
};