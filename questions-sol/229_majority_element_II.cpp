/*Approach: modified two pass Boyer-Moore Voting Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2 = 0;
        int b1=0, b2=1;
        for(int x : nums){
            if(x==b1)c1++;
            else if(x==b2)c2++;
            else if(c1==0){
                b1=x;
                c1++;
            }
            else if(c2==0){
                b2=x;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i : nums){
            if(i==b1)c1++;
            if(i==b2)c2++;
        }
        vector<int> out;
        if(c1>n/3)out.push_back(b1);
        if(c2>n/3)out.push_back(b2);
        return out;
    }
};