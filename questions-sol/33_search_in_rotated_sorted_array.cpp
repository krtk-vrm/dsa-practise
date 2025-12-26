/*Approach - used to binary searches, first to find the pivot point and second one with adjusted mid for
rotated to find the target.
TC - O(logn)
SC - O(1)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = nums.size()-1;
        int pivt = 0;
        while(low < high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        pivt = low;
        low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            
            int realM = (mid+pivt)%n;
            if(nums[realM]==target)return realM;
            else if(nums[realM]<target)low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};