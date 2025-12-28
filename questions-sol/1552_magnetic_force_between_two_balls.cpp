/*Approach - using binary search, i greedily check if i can place balls at 'mid' distances.
TC - O(n*logm)
SC - O(1)
*/
class Solution {
public:
    bool can(vector<int>& position, int m, int mid){
        int ball = 1;
        int lastpos = position[0];
        for(int i = 1; i < position.size() ; i++){
            if(position[i]-lastpos>=mid){
                ball++;
                lastpos = position[i];
                if(ball==m)return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 1;
        int n = position.size();
        int high = position[n-1]-position[0];
        int ans = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(can(position, m, mid)){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};