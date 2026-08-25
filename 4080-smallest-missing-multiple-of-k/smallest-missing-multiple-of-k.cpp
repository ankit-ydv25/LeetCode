class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=1;
        while(true)
        {
            int z = k*i;
            bool found = false;
            for(int j=0;j<n;j++)
            {
                if (nums[j] == z) {
                    found = true;
                    break;
                }
            }
            if(!found) return z;
            i++;
        }
    }
};