/*Approach - using 3 pointer technique, p1 for 0s at left, p2 for traversing in the middle
p3 for 2s at right.
TC is O(n)
SC is O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0 , p2 = 0;
        int p3 = n-1;

        while(p2<=p3){
            if(nums[p2]==0){
                swap(nums[p1], nums[p2]);
                p1++;
                p2++;
            }
            else if(nums[p2]==1) p2++;
            else{
                swap(nums[p3],nums[p2]);
                p3--;
            }
        }
    }
};