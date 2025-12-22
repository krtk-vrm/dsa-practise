/*Approach - 2 pointer approach - 1pointer is for checking and other one is anchor that unique characters in order.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        for(int r = 1 ; r < nums.size() ; r++){
            if(nums[r]!=nums[l-1]){
                nums[l]=nums[r];
                l++;
            }
        }
        return l;
    }
};