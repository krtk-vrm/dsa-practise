/*Approach - used binary search to first find the row and then the element in that row.
TC - O(log(n*m))
SC - O(1)
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int column = 0;
        int low = 0;
        int r = matrix.size();
        if(!r)return false;
        int c = matrix[0].size();
        if(r==0||c==0)return false;
        int rtf = -1, ctf;
        int high = r-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[mid][0]<=target&&matrix[mid][c-1]>=target){
                rtf = mid;
                break;
            }
            else if(matrix[mid][0]>target && matrix[mid][c-1]>target){
                high = mid-1;
            }
            else if(matrix[mid][0]<target){
                low = mid+1;
            }
        }
        if(rtf==-1)return false;
        high = c-1;
        low = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[rtf][mid]==target)return true;
            if(matrix[rtf][mid]>target)high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};