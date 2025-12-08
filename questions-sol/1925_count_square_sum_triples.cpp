/*
T.C is O(n^2)
S.C is O(n^2)

*/

#pragma GCC optimize("O3", "unroll loops")
class Solution {
public:
    
    int countTriples(int n) {
        vector<bool> hash(n*n+1,false);
        for(int i = 1 ; i <= n; i++){
            hash[i*i]=true;
        }
        int count = 0;
        for(int i = 1; i <= n; i++){
            int i2 = i*i;
            for(int j = 1; j <= n ;j++){
                int j2 = j*j;
                int a = i2+j2;
                if(a>n*n)break;
                if(hash[a])count++;
            }
        }
    return count;
    }
};