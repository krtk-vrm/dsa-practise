/*Approach - first make the out string by adding the bits and carry from each string.
TC - O(max(n,m))
SC - O(max(n,m))
*/
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int car = 0;
        string out;
        while(i>=0 || j>=0 || car){
            int sum = car;
            if(i>=0)sum+=a[i--]-'0';
            if(j>=0)sum+=b[j--]-'0';
            out.push_back((sum)%2+'0');
            car=sum/2;
        }
        reverse(out.begin(),out.end());
        return out;
    }
};