class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> que;
        for(int i = 0; i < n; i++){
            que.push(stones[i]);
        }
        for(int i = 0; i < n-1; i++){
            if(que.empty()){
                return 0;
            }else{
                int x = que.top();
                que.pop();
                int y = que.top();
                que.pop();
                if(x != y){
                    que.push(abs(x-y));
                }
            }
        }
        if(que.empty()){
            return 0;
        }
        return que.top();
    }
};
