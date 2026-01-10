/*Approach - mathematically there are only two ways for a number to have 4 divisors.
1. cube of a prime number
2. product of two distinct prime numbers
TC is O(m*n)
SC is O(1)
*/
class Solution {
public:
  bool isprime(int n) {
    if (n < 2)
      return false;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0)
        return false;
    }
    return true;
  }
  int sumFourDivisors(vector<int> &nums) {
    int ans = 0;
    int p, q;
    for (int n : nums) {
      p = cbrt(n);
      if (p * p * p == n && isprime(p)) {
        ans += 1 + p + p * p + p * p * p;
      }
      for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) {
          p = j;
          q = n / j;
          if (p != q && isprime(p) && isprime(q)) {
            ans += 1 + p + q + p * q;
            break;
          }
        }
      }
    }
    return ans;
  }
};