class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int left =-1;
        int right =-1;
        int first = 0;
        int second = nums.size()-1;
        while(first<=second)
        {
            int mid = first + (second-first)/2;
            if(nums[mid]>target)
            {
                second = mid-1;
            }
            else if(nums[mid]<target)
            {
                first = mid+1;
            }
            else{
                left = mid;
                second = mid-1;
            }
        }
        first = 0;
        second = nums.size()-1;
        while(first<=second)
        {
            int mid = first + (second-first)/2;
            if(nums[mid]>target)
            {
                second = mid-1;
            }
            else if(nums[mid]<target)
            {
                first = mid+1;
            }
            else{
                right = mid;
                first = mid+1;
            }
        }
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};