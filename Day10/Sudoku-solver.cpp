class Solution {
public:
bool isSafe(int row,int col,vector<vector<char>> &b,char v){
    for(int i = 0 ; i < b.size();i++){
        if(b[row][i]==v) return false;
        if(b[i][col]==v) return false;
        if(b[3*(row/3) + i/3][3*(col/3)+i%3]==v) return false;
    }
    return true;
}
char aaa = '.';
bool solve(vector<vector<char>> &b){
    int n = b[0].size();
    for(int r = 0;r<n;r++){
        for(int c = 0;c<n;c++){
            if(b[r][c]==aaa){
                for(char v = '1';v<='9';v++){
                    if(isSafe(r,c,b,v)){
                        b[r][c]=v;
                        bool a = solve(b);
                        if(a) return true;
                        else b[r][c]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};