/*Approach - to find the subarray sum, first i find the prefix sum and then i find the subarray sum.
TC - O(n)
SC - O(n)
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i = 1; i < n ; i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        int count = 0;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i < n ; i++){
            if(prefix[i]==k)count++;
            if(mpp.find(prefix[i]-k)!=mpp.end()){
                count+=mpp[prefix[i]-k];
            }
            mpp[prefix[i]]++;
        }
        return count;
    }
};