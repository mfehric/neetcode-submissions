class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> mapa;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mapa[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        auto it = upper_bound(mapa[key].begin(), mapa[key].end(), timestamp, 
    [](int timestamp, const pair<string,int>& p) {
        return timestamp < p.second; // poredi target sa .second (int dio)
    });
        if(it == mapa[key].begin()){
            return "";
        }else{
            it--;
        return (*it).first;
        
        }
        
    }
};
