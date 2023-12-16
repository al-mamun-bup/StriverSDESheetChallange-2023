/**
* Most Optimal Solution
* TC O(n) SC O(1)
**/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = 1e9;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(prices[i]<mn){
                mn = prices[i];
            }
            ans = max(ans,prices[i]-mn);
        }
        return ans;

    }
};
