/* Approach - first create a hash table using unordered_map where the key is the nums[i], and the value 
is its freq. Then i made a second loop to find form the hash table;
TC is O(n)
SC is O(n)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long long, int> mp;
        int n = nums.size();
        for(int i = 0; i < n ; i++ ){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second>n/2)return i.first;

        }
        return 0;
    }
};