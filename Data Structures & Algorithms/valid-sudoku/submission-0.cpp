class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int c = j+1;
                while(c<9){
                    if(board[i][j]==board[i][c]){
                        return false;
                    }
                    c++;
                }
                int r= i+1;
                while(r<9){
                    if(board[i][j]==board[r][j]){
                        return false;
                    }
                    r++;
                }
                int boxRow = (i / 3) * 3;
                int boxCol = (j / 3) * 3;

                for(int r = boxRow; r < boxRow + 3; r++){
                    for(int c = boxCol; c < boxCol + 3; c++){
                        if(r == i && c == j) continue;

                        if(board[r][c] == board[i][j]){
                                 return false;
                        }
                    }
                }

                
        }
        }
        return true;

    }
};
