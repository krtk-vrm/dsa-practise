/*Approach - first reduce the string to just alphabets,then check.
TC - O(n)
SC - O(n)
*/
class Solution {
public:
    string reduce(const string &s) {
    string temp;
    temp.reserve(s.size());

    for (char c : s) {
        
        if (c >= '0' && c <= '9') {
            temp += c;
            continue;
        }

        
        if (c >= 'A' && c <= 'Z') {
            temp += c;
            continue;
        }

        
        if (c >= 'a' && c <= 'z') {
            temp += c;
            continue;
        }

        
    }

    return temp;
}
    bool check(string &s, int left, int right){
        if(left>=right){
            return true;
        }
        if(tolower(s[left])==tolower(s[right])){
            return check(s, left+1, right -1);
        }
        return false;

    }
    bool isPalindrome(string& s) {
        string temp = reduce(s);

        return check(temp, 0, temp.size() - 1);
    }
};