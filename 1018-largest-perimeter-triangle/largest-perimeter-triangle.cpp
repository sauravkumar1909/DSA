class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //sort on decreasing order
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i=0;i<nums.size() - 2; i++)
        // triangle rule : a + b > c , b + c > a , a + c > b
        if(nums[i+1] + nums[i+2] > nums[i])
            return nums[i] + nums[i+1] + nums[i+2]; //perimeter of triangle
        return 0;
    }
};