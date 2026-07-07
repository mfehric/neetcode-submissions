class Solution {
public:
    int characterReplacement(string s, int k) {
        //window majority i ostali da budu <=k 
        int n = s.size();
        int left = 0;
        int right = 0;
        int freq[26] = {0};
        int windows_size=0;
        int maxfreq = 0;
        int res = 0;
        //O(26*n)
        while(right != n){
            freq[s[right]-'A']++;
            maxfreq = max(maxfreq,freq[s[right]-'A']);
            windows_size = right-left+1;
            if(windows_size - maxfreq <= k){
                res = max(res,windows_size);
            }else{
                freq[s[left]-'A']--;
                windows_size--;
                left++;
            }
            right++;
        }
        return res;
    }
};
