/*Approach - Two binary search functions that are tweaked a bit to find first and last position of element in the sorted
array.
TC - O(logn)
SC - O(1)
*/
class Solution {
public:
    int findLast(vector<int>& nums, int target) {
        int result = -1;
        int low = 0;

        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                result = mid;
                low = mid + 1;
            }

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return result;
    }
    int findFirst(vector<int>& nums, int target) {
        int result = -1;
        int low = 0;

        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                result = mid;
                high = mid - 1;
            }

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};