class Solution {
public:

    long long binom(int n, int k){
        long long ans = 1;
        int temp = 1;
        for(long long i = n; i>=n-k+1; i--){
            ans = ans*i/temp;
            temp++;
        }
        return ans;
    }
    int uniquePaths(int m, int n) {
        //m-1 poteza dole n-1 poteza desno, rjesenje ce biti 
        //(m+n-2,m-1);
        return binom(m+n-2,m-1);
        
    }
};
