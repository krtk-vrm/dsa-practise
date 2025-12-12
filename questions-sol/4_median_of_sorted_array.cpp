/*Approach - reduced the space complexity by instead of making an array, i break count till i reach the middle,
and then break and return;
TC is O(m+n)
SC is O(1)
*/
#pragma GCC optimize("Ofast")
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n+m;
        int mid1 = (total-1)/2;
        int mid2 = (total)/2;
        int count = -1;
        int i = 0, j = 0;
        int left = 0 , right = 0;
        while (i < n || j < m) {
            int val;
            if (j == m || (i < n && nums1[i] < nums2[j])) {
                val = nums1[i];
                i++;
            } else {
                val = nums2[j];
                j++;
            }

            count++;

            if (count == mid1) left = val;
            if (count == mid2) {
                right = val;
                break; 
            }
        }
        if(total%2==0) return (left+right)/2.0;
        return right;
    }
};