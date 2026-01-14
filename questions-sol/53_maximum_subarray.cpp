/*Approach - keep a running sum and if the sum becomes negative, reset it to zero(kadane algo)
TC - O(n)
SC - O(1)
*/
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    long long ans = LLONG_MIN;
    int n = nums.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
      if (sum > ans)
        ans = sum;
      if (sum < 0)
        sum = 0;
    }
    return ans;
  }
};