class Solution {
public:
    // Globally using a vector ans 
    vector<vector<string>> ans;
    bool is_valid(vector<string> &board, int row, int col)
    {
        // check col
        for(int i=row;i>=0;--i)
            if(board[i][col] == 'Q') return false;
        // check left diagonal
        for(int i=row, j=col; i>=0 && j>=0; i--,j--)
            if(board[i][j] == 'Q') return false;
        //check right diagonal
        for(int i=row,j=col;i>=0 && j<board.size(); i--,j++)
            if(board[i][j] == 'Q') return false;
        return true;
    }


    void solve(vector<string> &board, int row){
        // exit condition
        if(row == board.size()){
            ans.push_back(board);
            return;
        }
        // iterate every possible position
        for(int col=0;col<board.size();col++){
            if(is_valid(board,row,col)){
                // if the condition is true then making the po ='Q' and then recursion call
                board[row][col] = 'Q';
                solve(board,row+1);
                // back-tracking and make it '.' before backtracking if false 
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board(n,string(n,'.'));
        solve(board,0);
        return ans;
    }
};
