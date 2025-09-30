class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size() > 1){
        vector<int>ans;
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
           int newNum = (nums[i] + nums[i+1]) % 10;
           ans.push_back(newNum);
        }
          nums=ans;
        }
        return nums[0];
    }
};