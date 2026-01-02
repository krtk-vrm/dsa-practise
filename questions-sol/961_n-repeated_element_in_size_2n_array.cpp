/*Appraoch - use a hashmap and if the element was already present in the set return it.
TC - O(n)
SC - O(n)
*/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums) {
            if (s.count(x)) return x;
            s.insert(x);
        }
        return -1;
    }
};
