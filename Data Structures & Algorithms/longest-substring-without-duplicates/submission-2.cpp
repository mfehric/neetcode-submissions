class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> mapa;
        if(n == 0){
            return 0;
        }
        int maxwindow_size = 1;
        int left = 0;
        int right = 0;
        for(int i = 0; i < n; i++){
            if(mapa.find(s[i]) == mapa.end()){
                mapa.insert(s[i]);
                maxwindow_size = max(maxwindow_size,i-left+1);
                continue;
            }else{
                cout << "i: " << i << " left: "<< left << " i-left "<< i-left << endl;
                maxwindow_size = max(maxwindow_size,i-left);
                while(s[left] != s[i]){
                    mapa.erase(s[left]);
                    left++;
                }
                mapa.erase(s[left]);
                left++;
                mapa.insert(s[i]);
            }
        }
        return maxwindow_size;
    }
};
