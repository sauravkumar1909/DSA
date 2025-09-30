class Solution {
public:
    int triangularSum(vector<int>& nums) {
        //jab tak nums.size > 1 rhega tab tak chalega loop
        while(nums.size() > 1){
        vector<int>ans;
        int n=nums.size();
        //iterating through nums
        for(int i=0;i<n-1;i++){
           int newNum = (nums[i] + nums[i+1]) % 10;
           ans.push_back(newNum);
        }
          nums=ans;  //assign the ans array  value to nums
        }
        return nums[0];
    }
};