class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int num =0;
        if(nums2.size()%2==1)
        {
            for(int i=0;i<nums1.size();i++)
            {
                num ^=nums1[i];
            }
        }
        if(nums1.size()%2==1)
        {
            for(int j=0;j<nums2.size();j++)
            {
                num ^= nums2[j];
            }
        }
        return num;
    }
};