/*Approach - merge them alternately till one string is completely, then put the rest part after that.
TC - O(n+m)
SC - O(n+m)
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out;
        int n = word1.size();
        int m = word2.size();
        int p1 =0, p2=0;
        while(p1<n && p2<m){
            out+=word1[p1++];
            out+=word2[p2++];
        }
        while(p1<n){
            out+=word1[p1++];
        }
        while(p2<m){
            out+=word2[p2++];
        }
        return out;
    }
};