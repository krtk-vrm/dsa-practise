/*Approach - create two different array to store positive and negative integers and then merge.
TC - O(n)
SC - O(n)
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i : nums){
            if(i>0)pos.push_back(i);
            else neg.push_back(i);
        }
        vector<int> out;
        for(int i = 0 ; i < n/2 ; i++){
            out.push_back(pos[i]);
            out.push_back(neg[i]);
        }
        return out;
    }
};