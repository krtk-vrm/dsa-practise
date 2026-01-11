/*Approach - while traversing the array i check for both direction.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
  bool isMonotonic(vector<int> &nums) {
    bool inc = true, dec = true;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] > nums[i + 1])
        inc = false;
      if (nums[i] < nums[i + 1])
        dec = false;
    }
    if (inc || dec)
      return true;
    return false;
  }
};