/*Approach - to find the spiral matrix, first i find the base and max values and then i find the spiral matrix.
TC - O(m*n)
SC - O(m*n)
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> out;
        int cbase = 0;
        int rbase = 0;
        int rmax = matrix.size() - 1;
        int cmax = matrix[0].size() - 1;
        while (rbase <= rmax && cbase <= cmax) {
            for (int i = cbase; i <= cmax; i++) {
                out.push_back(matrix[rbase][i]);
            }
            rbase++;
            for (int i = rbase; i <= rmax; i++) {
                out.push_back(matrix[i][cmax]);
            }
            cmax--;
            if (rbase <= rmax) {
                for (int i = cmax; i >= cbase; i--) {
                    out.push_back(matrix[rmax][i]);
                }
            rmax--;
            }
            if (cbase <= cmax) {
                for (int i = rmax; i >= rbase; i--) {
                    out.push_back(matrix[i][cbase]);
                }
            cbase++;
            }
        }
        return out;
    }
};