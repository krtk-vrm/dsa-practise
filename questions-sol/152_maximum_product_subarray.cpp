/*Approach - keep track of max and min product at each step.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int n = nums.size();
    int maxp = 1;
    int minp = 1;
    int ans = INT_MIN;
    int prevMax = maxp;
    int prevMin = minp;
    for (int i : nums) {
      prevMax = maxp;
      prevMin = minp;

      maxp = max(i, max(prevMax * i, prevMin * i));
      minp = min(i, min(prevMax * i, prevMin * i));
      ans = max(ans, maxp);
    }
    return ans;
  }
};