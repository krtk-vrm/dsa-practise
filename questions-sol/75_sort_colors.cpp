/*Approach - we can sort all zeros at left side and 2s at right
TC is O(n)
SC is O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0 , p2 = 1;
        while(p2<n){
            if(nums[p1]==0) {
                p1++;
            }
            if(p2==p1)p2++;
            if(p1>=n || p2>=n)break;
            if(!nums[p2]){
                swap(nums[p1], nums[p2]);
                p1++;
            }
            p2++;
        }
        p1 = n-1;
        p2 = n-2;
        while(p2>=0){
            if(nums[p1]==2){
                p1--;
            }
            if(p1==p2)p2--;
            if(p1<0 || p2<0)break;
            if(nums[p2]==2){
                swap(nums[p1],nums[p2]);
                p1--;
            }
            p2--;
        }
    }
};