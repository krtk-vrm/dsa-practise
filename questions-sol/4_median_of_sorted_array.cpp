/*Approach - optimised further by using partition and binary search to find the median on the smallest array;
TC is O(log(min(n,m)))
SC is O(1)
*/
class Solution {
public:
    double bsearch(vector<int>& nums1, vector<int>& nums2){
        int n = nums1.size();
        int m = nums2.size();
        double ans = 0;
        int low = 0;
        int high = n;
        int left1, left2, right1, right2;
        int i, j;
        while(low<=high){
            i = low + (high-low)/2;
            j = (n+m+1)/2-i;
            if(i==0)left1=INT_MIN;
            else left1 = nums1[i-1];
            if(j!=0)left2 = nums2[j-1];
            else left2 = INT_MIN;

            if(i==n)right1 = INT_MAX;
            else right1 = nums1[i];
            if(j!=m)right2 = nums2[j];
            else right2 = INT_MAX;

            if(left1<=right2&&left2<=right1){
                if((n+m)%2==1){
                    ans = max(left1,left2);
                    return ans;
                }
                else{
                    int leftm = max(left1,left2);
                    int rightm = min(right1,right2);
                    ans = 1.0*(leftm+rightm)/2;
                    return ans;
                }
            }

            if(left1>right2){
                high = i-1;
            }
            else if(left2>right1){
                low = i+1;
            }
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        if(n<=m){
            return bsearch(nums1, nums2);
        }
        else{
            return bsearch(nums2, nums1);
        }
        return 0;
    }
};