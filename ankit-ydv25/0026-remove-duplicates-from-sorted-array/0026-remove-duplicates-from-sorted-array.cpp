class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.insert(nums[i]);
        }
        int k=0;
        for(int x : ans)
        {
            nums[k]=x;
            k++;
        }
        return k;
    }
};