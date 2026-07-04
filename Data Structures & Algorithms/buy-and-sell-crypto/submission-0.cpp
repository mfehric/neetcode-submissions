class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyprice = prices[0];
        int best = 0;
        for(int i = 1; i < n; i++){
            if(buyprice > prices[i]){
                buyprice = prices[i];
            }else{
                best =max(best,prices[i]-buyprice);
            }
        }
    return best;
    }
};
