class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        bool isTrue=true;
        int count = 0;
        for(int i=0;i<arr1.size();i++)
        {
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j]) <= d)
                {
                    isTrue=false;
                    break;
                }
            }
            if(isTrue) count++;
            else isTrue = true;
        }
        return count;
    }
};