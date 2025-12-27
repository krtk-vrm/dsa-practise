/*Approach - the answer must lie between max(nums()) and sum(num). So the mid lies between this which acts as a hypothesis
and is tested. In other words, using binary search to reach the answer.
TC - O(n*log(sum(nums)))
SC - O(1)
*/
class Solution {
public:
    bool possibleornot(vector<int>& nums, int k, int mid){
        int count = 1;
        int sum = 0;
        for(int i : nums){
            if(sum+i<=mid){
                sum+=i;
            }
            else{
                sum = i;
                count++;
                if(count>k)return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = nums[0];
        int high = 0;
        for(int i : nums){
            if(i>low)low = i;
            high+=i;
        }
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possibleornot(nums,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};