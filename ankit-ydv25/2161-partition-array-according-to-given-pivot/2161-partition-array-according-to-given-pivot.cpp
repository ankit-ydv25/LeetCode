class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> num1;
        vector<int> num2;
        int p = pivot;
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                num1.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                num2.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        int sum = 0;
        while(sum<count)
        {
            num1.push_back(p);
            sum++;
        }
        num1.insert(num1.end(),num2.begin(),num2.end());
        return num1;
    }
};