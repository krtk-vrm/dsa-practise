/*Approach - Used a binary search to find the single non-duplicate element.First check if the mid is 
even or odd, then check if the mid element is equal to the next element, if yes then the single 
element is in the right half, else it is in the left half.
TC - O(logn)
SC - O(1)
*/
class Solution {
public:
  int singleNonDuplicate(vector<int> &nums) {
    int l = 0, r = nums.size() - 1;
    int n = nums.size();
    int m;
    while (l < r) {
      m = l + (r - l) / 2;
      if (m % 2 == 1)
        m--;

      if (nums[m] == nums[m + 1]) {
        l = m + 2;
      } else
        r = m - 1;
    }
    return nums[l];
  }
};