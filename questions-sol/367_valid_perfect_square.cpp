/*Approach - Used a binary search to find.
TC - O(logn)
SC - O(1)
*/
class Solution {
public:
  bool isPerfectSquare(int num) {
    int l = 1, r = num;
    int mid = 0;
    while (l <= r) {
      mid = l + (r - l) / 2;
      if ((long long)mid * mid == num)
        return true;
      else if ((long long)mid * mid > num) {
        r = mid - 1;
      } else
        l = mid + 1;
    }
    return false;
  }
};