/*Approach - sort the array and then check the later intervals.
TC is O(nlogn)
SC is O(1)
*/
class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> out;
    int n = arr.size();
    int l = arr[0][0];
    int r = arr[0][1];
    for (int i = 1; i < n; i++) {

      int lc = arr[i][0];
      int rc = arr[i][1];
      if (lc <= r) {
        r = max(r, rc);
        l = min(l, lc);
      } else {
        out.push_back({l, r});
        l = arr[i][0];
        r = arr[i][1];
      }
    }
    out.push_back({l, r});
    return out;
  }
};