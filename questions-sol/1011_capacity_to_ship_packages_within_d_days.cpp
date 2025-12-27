/*Approach - Binary + greedy. Answer will lie between max(weights) and sum(weights), so using binary search find the answer.
TC - O(n*log(sum(arr)))
SC - O(1)
*/
class Solution {
public:
    bool possibleornot(vector<int>& weights, int days, int mid){
        int day = 1;
        int wsum = 0;
        for(int i : weights){
            if(wsum+i<=mid)wsum+=i;
            else{
                wsum = i;
                day++;
                if(day>days)return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = weights[0];
        int right = 0;
        for(int w : weights){
            if(w>left)left = w;
            right+=w;
        }
        int ans = -1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(possibleornot(weights, days, mid)){
                ans = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }
};