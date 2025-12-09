/*Approach - Used DP to calculate the next number by summing the previous ones
int out array
TC is O(n^2)
SC is O(n^2)
*/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> out;
        for(int i = 0 ; i < n; i++){
            vector<int>row(i+1,1);

            for(int j = 1 ; j < i;j++ ){
                row[j] = out[i-1][j-1] + out[i-1][j]; 
            }
            out.push_back(row);
        }
        return out;
    }
};