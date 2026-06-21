class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //bruteforce solution works
        
        for(int i = 0; i < 9; i++){
            int freq[10] = {0};
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    freq[board[i][j]-'1']++;
                    if(freq[board[i][j]-'1'] == 2){
                        return false;
                    }
                }
            }
        }

        for(int i = 0; i < 9; i++){
            int freq[10] = {0};
            for(int j = 0; j < 9; j++){
                if(board[j][i] != '.'){
                    freq[board[j][i]-'1']++;
                    if(freq[board[j][i]-'1'] == 2){
                        return false;
                    }
                }
            }
        }
    for(int l = 0; l < 3; l++){
        for(int i = 0; i < 3; i++){
            int freq[10] = {0};
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(board[j+ (3*l%9)][k+(3*i%9)] != '.'){
                    freq[board[j+(3*l%9)][k+(3*i%9)]-'1']++;
                    if(freq[board[j+(3*l%9)][k+(3*i%9)]-'1'] == 2){
                        return false;
                    }
                }

                }
                
            }
        }
    }
    return true;



    }
};
