/*Approach - Brute force checking every element;
TC - O(n*m)
SC - O(1)
*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[m-1].size();
        for(int i = 0 ; i< m ; i++){
            for(int j = n-1 ; j >=0; j--){
                if(grid[i][j]<0)count++;
                else break;
            }
        }
        return count;
    }
};