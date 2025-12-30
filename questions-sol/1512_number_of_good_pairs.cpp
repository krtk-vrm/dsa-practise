/*Approach - first created a hash map and the find out the pairs possible for each.
TC - O(n + k)
SC - O(1)
*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i : nums){
            mpp[i]++;
        }
        int ans = 0;
        for(int i = 1 ; i <= 100 ; i++){
            if(!mpp[i])continue;
            int n = mpp[i];
            ans += n*(n-1)/2;
        }
        return ans;
    }
};