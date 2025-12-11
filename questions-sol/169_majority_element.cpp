/* Approach - i will assume that the first element is majority, then i will increment count if the next element is also 1
else i will decrement count. When count is zero, i will move my assumption to that element;
TC is O(n)
SC is O(1)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int base = 0 , count = 0;
        for(int x : nums){
            if(count==0){
                base = x;
            }
            if(x==base){
                count++;
            }
            else{
                count--;
            }
        }
        return base;
    }
};