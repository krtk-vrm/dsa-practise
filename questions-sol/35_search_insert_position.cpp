/*Approach - used binary search as the array is sorted and returned left instead of -1 if the loop terminates without returning.
TC is O(logn)
SC is O(1)
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;

        int high = nums.size() - 1;

        while(low<=high){

            int mid = low + (high-low)/2;


            if(nums[mid]==target) return mid;

            if(nums[mid]<target) low = mid+1;

            else high = mid-1;

        }

        return low;
    }
};