class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        int sum=0;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            sum = sum + gain[i];
            ans.push_back(sum);
        }
        int highestAltitude = ans[0];
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]>highestAltitude)
            {
                highestAltitude = ans[i];
            }
        }
        return highestAltitude;
    }
};