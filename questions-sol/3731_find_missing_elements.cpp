/*Approach - first sort the array, then put previous element and current element in two variables and push the elements
between them in out if exists.
TC - O(nlogn + Missing)
SC - O(Missing)
*/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> out;
        for(int i = 1 ; i <nums.size() ; i++){
            int prev = nums[i-1];
            int cur = nums[i];
            for(int j = prev+1 ; j < cur ; j++){
                out.push_back(j);
            }
        }
        return out;
    }
};