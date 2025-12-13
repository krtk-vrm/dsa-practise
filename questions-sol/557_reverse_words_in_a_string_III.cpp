/*Approach - p1 is anchor and i is scanner and when s[i] is space or i reaches last, swap the word before it
TC is O(m)
SC is O(1)
*/
#pragma GCC optimize("O3")
class Solution {
public:
    string reverseWords(string s) {
        int m = s.size();
        int p1 = 0;
        for (int i = 0; i <= m; i++) {
            if (s[i] == ' ' || i == m) {
                int l = p1, r = i - 1;
                while (l < r) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
                p1 = i + 1;
            }
        }
        return s;
    }
};