class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count=0;
        int n = nums.size();
        for(int j=0;j<n;j++)
        {
            int currsum=nums[j];
            for(int i=j;i<n;i++)
            {
               currsum = currsum+nums[i];
               if(j==i) currsum /=2;
                if(currsum==k) count++;
            }
        }
        return count;
    }
};