/*Approach - cumulate the gains and losses using sum and simultaneously check max altitude.
TC is O(n)
SC is O(1)
*/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxalt = 0;
        int sum = 0;
        for(int i : gain){
            sum+=i;
            maxalt = max(maxalt, sum);
        }
        
        return maxalt;
    }
};