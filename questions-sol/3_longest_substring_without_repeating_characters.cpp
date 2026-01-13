/*Approach - Sliding window
TC - O(n)
SC - O(n)
*/
#pragma GCC optimize("O3")
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int l = 0;
    int maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
      while (st.find(s[r]) != st.end()) {
        st.erase(s[l]);
        l++;
      }
      st.insert(s[r]);
      maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
  }
};
