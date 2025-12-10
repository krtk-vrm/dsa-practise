/*Approach - added 1 to the last digit and then if it was 9 (which caused some overflow),
i will increment the previous digit.
TC is O(n)
SC is O(1)
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int r = n-1;
        digits[r]++;
        int carry = 0;
        while(r>0 && digits[r]==10){
            digits[r]=0;
            r--;
            digits[r]+=1;
        }
        if(r==0 && digits[r]==10){
            digits[r] = 0;
            digits.insert(digits.begin(), 1);

        }
        return digits;
    }
};