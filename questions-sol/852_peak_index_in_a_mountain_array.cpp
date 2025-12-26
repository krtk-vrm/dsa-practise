/*Approach - using binary search, check whether i am on descending side or ascending an adjust accordingly
TC - O(logn)
SC - O(1)
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size()-2;
        while(low<high){
            int mid = low + (high-low)/2;
            if(arr[mid]>arr[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};