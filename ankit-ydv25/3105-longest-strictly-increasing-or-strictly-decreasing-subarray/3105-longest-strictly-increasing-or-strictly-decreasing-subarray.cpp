class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i]<nums[i+1])
            {
                count++;
            }
            else{
                count=0;
            }
            maxCount = max(count, maxCount);
        }
        count = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                count++;
            }
            else{
                count=0;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount+1;
    }
};