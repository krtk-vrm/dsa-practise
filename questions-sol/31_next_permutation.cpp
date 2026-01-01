/*Approach - starting from the last of the array, i first find the pivot element,
then i find the first element which is greater than the pivot element,
then i swap them and reverse the array from the pivot element to the last element.
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        bool rev = true;
        for(int i = n-2 ; i >=0 ; i--){
            if(nums[i]<nums[i+1]){
                rev = false;
                for(int j = n-1 ; j> i ; j--){
                    if(nums[j]>nums[i]){
                        swap(nums[j], nums[i]);
                        reverse(nums.begin()+i+1,nums.end());
                        break;
                    }
                }
                break;
            }
        }
        if(rev){
            reverse(nums.begin(),nums.end());
        }
    }
};