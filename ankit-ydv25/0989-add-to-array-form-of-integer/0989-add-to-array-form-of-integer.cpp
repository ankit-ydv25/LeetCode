class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> nums;
        for(int i=num.size() -1 ;i>=0 || k>0 ;i--)
        {
            if(i>=0)
            {
                k += num[i];
            }
            nums.push_back(k%10);
              k /=10;
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};