/*Approach - Lazy approach using stl in c++ and then returning the middle element;
TC is O(m+n)
SC is O(m+n)
*/
#pragma GCC optimize("Ofast")
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        merge(nums1.begin(),nums1.end(), nums2.begin(), nums2.end(), back_inserter(out));
        int n = out.size();
        if(n%2!=0)return out[n/2];
        else return (1.0*out[n/2]+1.0*out[n/2-1])/2;
        

    }
};