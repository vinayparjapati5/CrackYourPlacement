class Solution {
public:

    bool checkNext(vector<vector<char>>& board, string word, int row,int col, int index, int n , int m){

        if(index == word.size()) return true;

        //check boundaries or visited 
        if(row<0 || col<0 || row ==n || col ==m || board[row][col]!= word[index] || board[row][col]=='*'){
            return false;
        }

        // prevent reuse of same

        char temp = board[row][col];
        board[row][col] = '*';

        bool top = checkNext(board, word, row-1, col, index+1, n, m);

        bool bottom = checkNext(board, word, row+1, col, index+1, n, m);
        bool left = checkNext(board, word, row, col-1, index+1, n, m);

        bool right = checkNext(board, word, row, col+1, index+1, n, m);

        board[row][col] = temp;


        return top || bottom || left || right;
    }
    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();

        int index = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]==word[index]){
                    if(checkNext(board, word, i, j, index ,n,m)){
                        return true;
                    }
                }
            }
        }


        return false;
    }
};
