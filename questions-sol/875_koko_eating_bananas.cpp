/*Approach - using binary search i greedily check for the given k and if it works, i find lower
else i find higher.
TC - O(n*logm)
SC - O(1)
*/
class Solution {
public:
    bool can(vector<int>& piles, int h, int k){
        int time = 0;
        for(int i : piles){
            int tforthis = (i + k - 1) / k;
            time+=tforthis;
            if(time>h)return false;
            
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = piles[0];
        for(int i : piles){
            high = max(i, high);
        }
        int ans = high;
        while(low<=high){
            int k = low + (high-low)/2;
            if(can(piles, h, k)){
                ans = k;
                high = k-1;
            }
            else 
                low = k+1;
        }
        return ans;

    }
};