class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = 100000;
        int sum=0;
        while(l<=r)
        {
            for(int j=0;l+j<=nums.size();j++)
            {
                sum = accumulate(nums.begin()+j, nums.begin()+j+l, 0);
                if(sum>0){
                    minSum = min(sum,minSum);
                }
            }
            l++;
        }
        if(minSum==100000) return -1;
        return minSum;
    }
};