/*Approach - just check the middle sign in each string in operations and do accordingly.
TC - O(n)
SC - O(1)
*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string i : operations){
            if(i[1]=='+'){
                x+=1;
            }
            else x-=1;
        }
        return x;
    }
};