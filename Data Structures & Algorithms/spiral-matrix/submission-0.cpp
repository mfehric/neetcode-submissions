class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //ocito moze sa ekstra memorijom
        //
        int m = matrix.size();
        int n = matrix[0].size();
        pair<int,int> gl = {0,0};
        pair<int,int> gd = {0,n-1};
        pair<int,int> dl ={m-1,0};
        pair<int,int> dd = {m-1,n-1};
        vector<int> res;
        //ovdje uslov moram fino postaviti za kraj
        while(gl.first <= dd.first && gl.second <= dd.second){
            auto temp = gl;
                while(temp.second != gd.second+1){
                    res.push_back(matrix[temp.first][temp.second]);
                    temp.second++;

                }
                temp = gd;
                while(temp.first != dd.first+1){
                    if(temp != gd)
                        res.push_back(matrix[temp.first][temp.second]);
                    temp.first++;
                }
                temp =dd;
                if(dd != gd){
                    while(temp.second != dl.second-1){
                    if(temp != dd)
                        res.push_back(matrix[temp.first][temp.second]);
                    temp.second--;
                }
                }
                
                temp = dl;
                if(dd != dl){
                    while(temp.first != gl.first){
                    if(temp != dl)
                        res.push_back(matrix[temp.first][temp.second]);
                    temp.first--;
                }
                }
                
                gl = {gl.first+1,gl.second+1};
                gd = {gd.first+1,gd.second-1};
                dd = {dd.first-1,dd.second-1};
                dl = {dl.first-1,dl.second+1};
        }
        return res;
    }
};
