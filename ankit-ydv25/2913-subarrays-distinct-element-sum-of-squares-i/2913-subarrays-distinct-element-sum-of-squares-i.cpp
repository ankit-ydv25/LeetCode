class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int size=nums.size();
        int ans =0;
        for(int i=0;i<size;i++)
        {
            unordered_set<int> realSize;
            for(int j=i;j<size;j++)
            {
                realSize.insert(nums[j]);
                int p = realSize.size();
                ans += p*p;
            }
        }
        return ans;
    }
};