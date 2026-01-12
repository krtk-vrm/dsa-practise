/*Approach - use XOR and only the single element will be the answer.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int k = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      k = k ^ nums[i];
    }
    return k;
  }
};