/**
* Most Optimal Solution
* Tc O(row*col) SC O(1)
**/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > v;
        for(int i = 0; i < numRows ; i++){
            vector<int>row;
            for(int j = 0;j<=i;j++){
                if(j==0 or j==i){
                    row.push_back(1);
                }else{
                    row.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(row);
        }
        return v;
    }
};
