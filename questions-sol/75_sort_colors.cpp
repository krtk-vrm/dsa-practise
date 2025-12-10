/*Approach - lazy, let c++ handle
TC is O(nlogn)
SC is O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};