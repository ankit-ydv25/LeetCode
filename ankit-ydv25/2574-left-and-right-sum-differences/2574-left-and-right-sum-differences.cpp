class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        vector<int> answer;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            leftSum.push_back(sum);
            sum += nums[i];
        }
        sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++)
        {
            sum -= nums[i];
            rightSum.push_back(sum);
        }
        for(int i=0;i<nums.size();i++)
        {
            answer.push_back(abs(rightSum[i]-leftSum[i]));
        }
        return answer;
    }
};