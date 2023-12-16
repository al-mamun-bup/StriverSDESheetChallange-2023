/**
* Most Optimal Solution
* TC O(n) SC O(1)
**/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i = 0; i < nums.size() ;i++){
            if(nums[i]==0){
                zero++;
            }else if(nums[i]==1){
                one++;
            }else{
                two++;
            }
        }
        for(int i = 0;i<nums.size();i++){
            if(zero>0){
                nums[i] = 0;
                zero--;
            }else if(zero==0 and one>0){
                nums[i] = 1;
                one--;
            }else if(one==zero and zero==0 and two>0){
                nums[i] = 2;
                two--;
            }
        }
    }
};
