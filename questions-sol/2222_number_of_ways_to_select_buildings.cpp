/*Approach - first counted the numbers of 1s and 0s in the string, then made a previous array
to count the frequency of 1s and 0s already transversed before i and then used it to find ans
TC is O(n)
SC is O(1)
*/

#pragma GCC optimize("O3", "unroll loops")
class Solution {
public:
    long long numberOfWays(string s) {
        int n = s.size();
        const int max = 1e5;
        int freq[2] = {0};
        for(int i : s){
            freq[i-'0']++;
        }
        int pre[2] = {0};
        pre[s[0]-'0']++;
        long long ans = 0;
        for(int i = 1 ; i < n ;i++){
            int v = s[i]-'0';
            if(v){
                ans = ans+((long long)pre[0]*(freq[0]-pre[0]));
            }
            if(!v){
                ans+=pre[1]*(freq[1]-pre[1]);
            }
            pre[v]++;

        }
        return ans;
    }
};