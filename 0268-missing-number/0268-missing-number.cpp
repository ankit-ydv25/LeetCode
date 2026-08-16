class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int actualsum=0;
        for(int value : nums)
        {
            actualsum += value;
        }
        return sum-actualsum;
    }
};