class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int best = 0;
        //[2,20,4,10,3,4,5]
        //poziciju za n+1 ili je isto ko i n ili se poveca za 1
        //kada se poveca za 1
        //pozicija n ta i dp neki najbolji
        unordered_set<int> skup(nums.begin(),nums.end());
        int longest = 0;
        for(int num: skup){
            if(skup.find(num-1) == skup.end()){
                int length = 1;
                while(skup.find(num+length) != skup.end()){
                    length++;
                }
                longest = max(longest,length);
            }
            
        }
        return longest;
        //JAKO BITNO ZNACI UNORDERED SET I UNORDED MAP IMAJU LOOKUP O(1), ubacivanje O(1) uglavnom sve O(1) u prosjeku


    }
};
