/*Approach - Binary Search
TC - O(n*logm)
SC - O(1)
*/
class Solution {
public:
  int countNegatives(vector<vector<int>> &grid) {
    int count = 0;
    int m = grid.size();
    for (int i = 0; i < m; i++) {
      int j = 0, k = grid[i].size() - 1;
      while (j <= k) {
        int mid = j + (k - j) / 2;
        if (grid[i][mid] < 0) {
          k = mid - 1;
        } else
          j = mid + 1;
      }
      count += grid[i].size() - j;
    }
    return count;
  }
};