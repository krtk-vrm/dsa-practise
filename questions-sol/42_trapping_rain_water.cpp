/*Approach - first i create a array of left max and right max, then i find the minimum of left max and right max and subtract the height of the current element and add it to the answer.
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int> lmax(n,0);
        lmax[0]= height[0];

        for(int i = 1 ; i < n ; i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }
        vector<int> rmax(n,0);
        rmax[n-1] = height[n-1];
        for(int i = n-2 ; i >=0 ; i--){
            rmax[i] = max(rmax[i+1],height[i]);
        }
        for(int i = 0 ; i < n ; i++){
            if(min(lmax[i],rmax[i])>height[i]){
                ans+=min(lmax[i],rmax[i])-height[i];
            }
        }
        return ans;
    }
};