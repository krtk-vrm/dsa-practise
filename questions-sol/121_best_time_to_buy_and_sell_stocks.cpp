/*Approach - Dynamic Programming
TC - O(n)
SC - O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0;
        int lowyet = prices[0];
        for(int i = 0 ; i < n ; i++){
            if(prices[i]<lowyet){
                lowyet=prices[i];
            }
            maxp = max(prices[i]-lowyet,maxp);
        }
        return maxp;
    }
};