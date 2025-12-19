/*Approach - first sort the array, then check the maximum difference.
TC - O(nlogn)
SC - O(1)
*/
#pragma GCC optimize("O3", "unroll loops")
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==1)return 0;
        if(n==2)return abs(nums[0]-nums[1]);
        int maxd = 0;
        for(int i = 0 ; i < n-1 ; i++){
            int d = abs(nums[i]-nums[i+1]);
            if(d>maxd)maxd = d;
        }
        return maxd;
    }
};