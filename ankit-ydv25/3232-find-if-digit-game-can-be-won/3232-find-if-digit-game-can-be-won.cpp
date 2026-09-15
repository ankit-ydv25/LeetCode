class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum = totalsum + nums[i];
            if(nums[i]<10)
            {
                sum = sum + nums[i];
            }
        }
        if((totalsum-sum)!=sum)
        {
            return true;
        }
        else{
        return false;
        }
    }
};