/**
* Most Optimal Solution
* TC O(n) SC O(1)
**/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = -1e9;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(i==0){
                sum += nums[i];
            }else{

                sum = max(sum+nums[i],nums[i]);
            }
            ans = max(ans,sum);
        }
        return ans;
    }
};
