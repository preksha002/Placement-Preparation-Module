class Solution {
public:
    vector<vector<int>> generate(int numRows) {

    vector<vector<int>> res(numRows);

    for(int i = 0; i < numRows; i++) {
        res[i].resize(i + 1); // Resize the current row to accommodate i+1 elements
        
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                res[i][j] = 1;
            } else {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
    }
    
    return res;
}
};