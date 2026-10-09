class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> numsEven;
        vector<int> numsOdd;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                numsEven.push_back(nums[i]);
            }
            else
            {
                numsOdd.push_back(nums[i]);
            }
        }
        nums.erase(nums.begin(),nums.end());
        for(int i = 0 ; i<numsEven.size() ;i++)
        {   
            nums.push_back(numsEven[i]);
        }
        for(int i=0;i<numsOdd.size();i++)
        {
            nums.push_back(numsOdd[i]);
        }
        return nums;
    }
};