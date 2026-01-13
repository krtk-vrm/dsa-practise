/*Approach - Sliding window
TC - O(n)
SC - O(1)
*/
#pragma GCC optimize("O3")
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(128, -1);

    int l = 0;
    int maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
      if (lastIndex[s[r]] >= l) {
        l = lastIndex[s[r]] + 1;
      }
      lastIndex[s[r]] = r;
      maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
  }
};