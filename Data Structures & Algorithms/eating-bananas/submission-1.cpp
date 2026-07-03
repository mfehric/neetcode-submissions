class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maks = 1;
        int n = piles.size();
        for(auto& x: piles){
            maks = max(maks,x);
        }
        int poc = 1;
        int kraj = maks;
        int bestkorak = 1000000000;
        int ans = 0;
        while(poc <= kraj){
            int korak = 0;
            int mid = poc + (kraj-poc)/2;
            cout << "MID JE: " << mid << endl;
            for(const auto& x: piles){
                cout << (x+mid-1)/mid << " ";
                korak+= (x+mid-1)/mid;
            }
            cout << "KORAK:" << korak << endl;
            if(korak <= h){
                bestkorak = min(bestkorak,korak);
                kraj = mid-1;
                ans = mid;
            }else{
                poc = mid+1;
            }
        }
        return ans;
        
    }
};
