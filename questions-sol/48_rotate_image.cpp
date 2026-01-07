/*Approach - to rotate the whole matrix 90 degree, first transpose it and then reverse each row.
TC - O(n^2)
SC - O(1)
*/
class Solution {
public:
    void rev(vector<int>& row){
        int n = row.size();
        for(int i = 0; 2*i < n ; i++){
            swap(row[i],row[n-1-i]);
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i = 0; i < m ; i++){
            for(int j = i ; j < m ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0 ; i < m ; i++){
            rev(matrix[i]);
        }
    }
};