class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<int>>matrix2;
        matrix2 = matrix;
        for (int i = 0; i < matrix.size(); i++)
        {
        for (int j = 0; j < matrix[i].size(); j++)
        {
           matrix[i][j]=matrix2[n-1-j][i];
        }  
        }
        
    }
};
