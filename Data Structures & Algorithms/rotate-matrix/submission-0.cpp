class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //flipamo pola pola i onda preslikamo preko dijagonale
        int m = matrix.size();
        for(int i = 0; i < m/2; i++){
            swap(matrix[i],matrix[m-1-i]);
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};
