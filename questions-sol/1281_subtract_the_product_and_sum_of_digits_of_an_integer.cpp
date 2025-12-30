/*Approach - calculate sum and product of digits simultaneously.
TC - O(digit of n)
SC - O(1)
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        for(int temp = n ; temp > 0 ; temp/=10){
            int a = temp%10;
            sum+=a;
            product*=a;
        }
        return product-sum;
    }
};