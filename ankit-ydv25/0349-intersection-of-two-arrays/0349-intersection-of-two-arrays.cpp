class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hashMap1[1001]={0};
        int hashMap2[1001]={0};
        for(int i=0;i<nums1.size();i++)
        {
            hashMap1[nums1[i]] +=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
            hashMap2[nums2[i]] +=1;
        }
        vector<int> ans;
        for(int i =0;i<1001;i++)
        {
            if(hashMap1[i]!=0 && hashMap2[i]!=0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};