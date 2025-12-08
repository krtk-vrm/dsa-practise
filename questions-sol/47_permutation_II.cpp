/*

T.C is O(n*n!)
S.C is O(n*n!)

*/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> out;
        do {
            out.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return out;
    }
};