class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        
        int distinctnum=1;
        int prev=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i] != prev){
            distinctnum++;
            prev=nums[i]; 
            }
            if(distinctnum==3){
                return nums[i];
            }
        }
        return nums[0];
    }
};