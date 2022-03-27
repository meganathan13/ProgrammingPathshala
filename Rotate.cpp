class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size()-1;
        int m=matrix.size()-1;
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
               int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
         for(int i=0;i<matrix.size();i++){
             reverse(matrix[i].begin(),matrix[i].end());
        }
       
    }
};