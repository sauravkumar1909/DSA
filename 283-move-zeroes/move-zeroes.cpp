class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //ek naya array bnao
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        //copy the new value from temp to nums
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];
        }
        //if any spaces left after copy then move zero at that place
        for(int i=nz;i<nums.size();i++){
            nums[i]=0;
        }
    }
};