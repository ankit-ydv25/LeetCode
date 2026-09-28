class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=10 && nums[i]<=99)
            {
                total++;
            }
            if(nums[i]>=1000 && nums[i]<=9999)
            {
                total++;
            }
            if(nums[i]==100000)
            {
                total++;
            }
        }
        return total;
    }
};