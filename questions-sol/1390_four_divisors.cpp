/*Approach - first check if the number has 4 divisors and then return the sum of divisors.
TC is O(m*sqrt(n))
SC is O(1)
*/
class Solution {
public:
  bool fourdiv(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0)
        count += 2;
      if (i * i == n)
        count--;
    }
    return count == 4 ? true : false;
  }
  int sumfd(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        sum += i;
        sum += n / i;
      }
      if (i * i == n)
        sum -= i;
    }
    return sum;
  }
  int sumFourDivisors(vector<int> &nums) {
    int ans = 0;
    for (int i : nums) {
      if (fourdiv(i)) {
        ans += sumfd(i);
      }
    }
    return ans;
  }
};