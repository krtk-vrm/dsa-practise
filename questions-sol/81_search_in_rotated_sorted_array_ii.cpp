/*Approach - Used a single binary search to find the target element, by checking if the left half or right half is sorted and then checking if the target element is in the sorted half.
TC(worst case) - O(n)
SC - O(1)
*/
class Solution {
public:
  bool search(vector<int> &nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] == target)
        return true;
      if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
        l++, r--;
      } else if (nums[l] <= nums[mid]) {
        if (nums[l] <= target && target < nums[mid]) {
          r = mid - 1;
        } else
          l = mid + 1;
      } else {
        if (nums[mid] < target && target <= nums[r]) {
          l = mid + 1;
        } else
          r = mid - 1;
      }
    }
    return false;
  }
};