/*Approach - to save memory, i just store last two numbers and push.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        int a = 0, b = 1;
        for(int i = 2; i <= n ; i++){
            int c =a+b;
            a = b;
            b = c;
        }
        return b;
    }
};