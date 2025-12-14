/*Approach - first sort the array, then define the range by start and end. Then find if the elements between those range
lie in the vector, if not push them to out vector.
TC - O(nlogn + Range*n)
SC - O(Range*n)
*/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = nums[0];
        int n = nums.size();
        int end = nums[n-1];
        vector<int> out;
        for(int i = start ; i <= end ; i++){
            if(find(nums.begin(), nums.end(), i)==nums.end()){
                out.push_back(i);
            }
        }
        return out;
    }
};