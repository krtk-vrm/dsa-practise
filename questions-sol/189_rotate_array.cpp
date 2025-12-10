/* Version 1: Using temporary array (O(n) space) and putting the elements in a temp array
TC is O(n)
SC is O(k)
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return;

        k %= n;
        if (k == 0) return;

        vector<int> temp(k);

        for (int i = 0; i < k; i++)
            temp[i] = nums[n - k + i];

        for (int i = n - 1; i >= k; i--)
            nums[i] = nums[i - k];

        for (int i = 0; i < k; i++)
            nums[i] = temp[i];
    }
};
