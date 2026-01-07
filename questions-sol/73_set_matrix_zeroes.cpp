/*Approach - first i find the first row and first column which has 0 and then i mark the first row and first column as 0.
then i mark the rest of the matrix as 0.
TC - O(m.n)
SC - O(1)
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row0 = false;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    if(i==0){
                        row0 = true;
                    }
                    else{
                        matrix[i][0]=0;
                    }
                }

            }
        }
        for(int i = 1; i < m ; i++){
            for(int j = 1 ; j < n ; j++){
                if(!matrix[i][0]||!matrix[0][j]){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
        }
        if(row0){
            for(int i = 0; i < n ; i++){
                matrix[0][i]=0;
            }
        }
    }
};