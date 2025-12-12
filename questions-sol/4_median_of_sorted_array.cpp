/*Approach - build an array by merging the arrays in out array and then return the median of it;
TC is O(m+n)
SC is O(m+n)
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> out;
        int n = nums1.size();
        int m = nums2.size();
        int p1 = 0, p2 = 0;
        while(p1<n && p2 < m) {
            if (nums1[p1] > nums2[p2]) {
                out.push_back(nums2[p2]);
                p2++;
            }
            else{
                out.push_back(nums1[p1]);
                p1++;
            }
        }
        while(p1<n){
            out.push_back(nums1[p1]);
            p1++;
        }
        while(p2<m){
            out.push_back(nums2[p2]);
            p2++;
        }
        if ((n + m) % 2 != 0)
            return out[(n + m) / 2];
        if ((n + m) % 2 == 0)
            return 0.5 * out[(n + m) / 2 ] + 0.5 * out[-1 + (n + m) / 2];
        return 0;
    }
};