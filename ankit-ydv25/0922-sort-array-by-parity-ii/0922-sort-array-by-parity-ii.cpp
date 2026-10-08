class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> numOdd;
        vector<int> numEven;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                numEven.push_back(nums[i]);
            }
            else{
                numOdd.push_back(nums[i]);
            }
        }
        nums.erase(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i<numEven.size())
            nums.push_back(numEven[i]);
            if(i<numOdd.size())
            nums.push_back(numOdd[i]);
        }
        return nums;
    }
};