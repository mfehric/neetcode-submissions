class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>sol(n,0);
        for(int i = n-1; i >= 0; i--){
            if(i == n-1 || i == n-2){
                sol[i] += cost[i];
            }else{
                sol[i] = cost[i] + min(sol[i+1],sol[i+2]);
            }
        }
        return min(sol[0],sol[1]);
    }
};
