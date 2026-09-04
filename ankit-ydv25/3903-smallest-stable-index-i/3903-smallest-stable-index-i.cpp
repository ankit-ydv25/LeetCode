class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // if(nums.size()==1)
        // return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            int maxi = nums[0];
            for(int j=1;j<=i;j++)
            {
                if(maxi<nums[j])
                {
                    maxi = nums[j];
                }
            }
            int mini = nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(mini>nums[j]){
                    mini = nums[j];
                }
            }
            int diff = maxi-mini;
            if(diff<=k)
            {
                return i;
            }
        }
        return -1;
    }
};