class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nums[i] = -nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        long long square=0;
        for(int i=nums.size()/2;i<nums.size();i++)
        {
            square += nums[i]*nums[i];
        }
        for(int i=0;i<nums.size()/2;i++)
        {
            square -= nums[i]*nums[i];
        }
        return square;
    }
};