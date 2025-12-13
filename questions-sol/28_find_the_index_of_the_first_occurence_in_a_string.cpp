/*Approach - first, if there is no needle then just return 0. Then i find the position of needle in the
haystack using find and if position is npos then return -1 else return the position
TC is O(n.m)
SC is O(1)
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0;
        int pos = haystack.find(needle);
        return (pos==string::npos) ? -1 : pos;
    }
};