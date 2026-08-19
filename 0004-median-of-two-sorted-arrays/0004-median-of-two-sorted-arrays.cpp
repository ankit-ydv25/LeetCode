class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int z= nums2.size();
        int i=0,j=0,k=0;
        vector<int> nums(n+z);
        while(i<n && j<z)
        {
            if(nums1[i]>=nums2[j])
            {
                nums[k]=nums2[j];
                j++;
            }
            else
            {
                nums[k] = nums1[i];
                i++;
            }
            k++;
        }
        while(i<n)
        {
            nums[k++] = nums1[i++];
        }
        while(j<z)
        {
            nums[k++] = nums2[j++];
        }
        int m =n+z;
        if(m%2==0)
        {
            return (nums[m/2] + nums[m/2 -1])/2.0;
        }
        else
        {
            return nums[m/2];
        }
    }
};