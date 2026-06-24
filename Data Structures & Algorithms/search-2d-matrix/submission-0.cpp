class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //find array with binary search and then find in array if exists
        int m = matrix.size();
        int n = matrix[0].size();
        //pair<int,int> poc = {0,matrix[0][n-1]};
        //pair<int,int> kraj = {m-1, matrix[m-1][0]};
        //broj 13
        //3*5 = 15-1 = 14
        //podijeliti na 5
        int poc = 0;
        int kraj = m*n-1;
        while(poc <= kraj){
            int mid = poc + (kraj-poc)/2;
            if(matrix[mid/n][mid%n] > target){
                kraj = mid-1;
            }else if(matrix[mid/n][mid%n] < target){
                poc = mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
};
