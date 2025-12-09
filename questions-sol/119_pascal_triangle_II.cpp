/*Approach - using DP to calculate the next from the previous know, by iterating the inner loop 
backwards
TC - O(n^2)
SC - O(n)

*/


class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> out(n+1,0);
        out[0] = 1;
        for(int i = 1 ; i <= n ; i++){
            for(int j = i ; j >= 1 ; j--){
                out[j] = out[j-1] + out[j];
            }
        }
        return out;
    }
};