class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0; i<r; i++){
            for(int j=(i+1); j<c; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        if(c%2==0){
            for(int k=0; k<r; k++)
            {for(int i=0,j=c-1; i<=c/2,j>=c/2; i++,j--){
                swap(matrix[k][i],matrix[k][j]);
            }}
        }
        else{
            for(int k=0; k<r; k++)
            {for(int i=0,j=c-1; i<c/2,j>c/2; i++,j--){
                swap(matrix[k][i],matrix[k][j]);
            }}
        }
    }
};
