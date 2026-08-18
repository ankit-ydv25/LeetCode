class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int value : nums)
        {
            ans = ans^value;
        }
        return ans;
    }
};