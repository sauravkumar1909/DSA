class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>freq;
        int maxfreq=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto it : freq){
            maxfreq=max(maxfreq,it.second);
        }
        
        for(auto &it : freq) {
            if(it.second == maxfreq) {
                cnt += it.second;
            }
        }

        return cnt;
    }
};