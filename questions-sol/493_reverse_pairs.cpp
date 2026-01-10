/*Approach - Using merge sort to count pairs between the two split arrays.
TC - O(nlogn)
SC - O(n)
*/
typedef long long ll;
class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        while (left <= mid)
            temp.push_back(arr[left++]);

        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }

    int count_merge(vector<int>& nums, int l, int h){
        if(l>=h)return 0;
        int m = (l+h)/2;
        int count = 0;
        int j = m+1;
        count += count_merge(nums,l,m);
        count += count_merge(nums,j,h);
        for(int i = l; i <= m ; i++){
            while(j<=h && (ll)nums[i]>(ll)2*nums[j]){
                j++;
            }
            count+=j-m-1;
        }
        merge(nums,l,m,h);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return count_merge(nums,0,nums.size()-1);
    }
};