/*Approach - to save time and space, modify the input. As the missing positive must be from
[1,N] first swap the elements to the right index and then find
TC is O(n)
SC is O(1)
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for(int i = 1; i <= n ;i++){
            if(nums[i-1]!=i){
                return i;
            }
        }
        return n+1;
    }
};