class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n==1)
        {
            return nums;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && i!=(n-1))
            {
                if(abs(nums[i]-nums[i+1])==1 || abs(nums[i]-nums[i-1])==1 || abs(nums[i]-nums[i+1])==0 || abs(nums[i]-nums[i-1])==0)
                {
                    continue;
                }
                else{
                    ans.push_back(nums[i]);
                }
            }
            else if (i==0 ){
                if(abs(nums[0]-nums[1])!=1 && abs(nums[0]-nums[1])!=0) 
                {
                    ans.push_back(nums[0]);
                }
                
            }
            else if (i==n-1)
            {
                if( abs(nums[n-2]-nums[n-1])!=1 && abs(nums[n-2]-nums[n-1])!=0)
                {
                    ans.push_back(nums[n-1]);
                }
            }
        }
        return ans;
    }
};