class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int count=0;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mpp[nums[i]] +=1;
            }
        }
        int max=0;
        int ans=-1;
        for(auto it : mpp)
        {
            if(it.second > max || (it.second==max && it.first < ans))
            {
                max = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};