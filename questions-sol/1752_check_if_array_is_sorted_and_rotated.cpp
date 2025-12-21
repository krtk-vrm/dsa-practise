/*Approach - at max 1 drop is allowed in the entire array. This makes it suitable to handle
sorted and duplicates.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
           if(nums[i]>nums[(i+1)%n])count++;
            if(count>1)return false;
        }
        return true;
    }
};