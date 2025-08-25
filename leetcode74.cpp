class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        int j=(c-1);
        int ans=0;
        while((i>=0&&i<r)&&(j>=0&&j<c))
        {
            if(matrix[i][j]==target){
                ans=1;
                break;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else {
                i++;
            }
        }
        if(ans){
            ans=1;
        }
        return ans;
    }
};
