/*Approach - To save space i used a boolean array of 26 elements. Run a loop and if the element is not in the array,
then i increase the count and basically count distinct characters.
TC is O(n)
SC is O(1)
*/
#pragma GCC optimize("O3", "unroll loops")
class Solution {
public:
    int maxDistinct(string s) {
        bool mpp[26] = {false};
        int count = 0;
        for (char c : s) {
            if (!mpp[c - 'a']) {
                mpp[c - 'a'] = true;
                count++;
            }
        }
        return count;
    }
};