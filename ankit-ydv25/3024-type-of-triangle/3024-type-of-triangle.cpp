class Solution {
public:
    string triangleType(vector<int>& nums) {
       int a = nums[0] + nums[1];
        int b = nums[1] + nums[2];
        int c = nums[2] + nums[0];
        if(a<=nums[2] || b<=nums[0] || c<=nums[1] )
        {
            return "none";
        }

        else{
        if(nums[0]==nums[1] && nums[1]==nums[2])
        {
            return "equilateral";
        }
        else if(nums[0]!=nums[1] && nums[1]!=nums[2] && nums[0]!=nums[2])
        {
            return "scalene";
        }
        else{
            return "isosceles";
        }
        } 
    }
};