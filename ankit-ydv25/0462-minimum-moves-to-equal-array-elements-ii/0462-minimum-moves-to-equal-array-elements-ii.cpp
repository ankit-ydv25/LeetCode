class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        long long mid = nums[n/2];
        long long count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<mid)
            {
                count += mid - nums[i];
            }
            else if(nums[i]>mid)
            {
                count += nums[i]-mid;
            }
            else continue;
        }
        return count;
    }
};