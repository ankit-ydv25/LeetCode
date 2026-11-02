class Solution {
public:
    int minimumChairs(string s) {
        int maxCount=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E')
            {
                count++;
            }
            else
            {
                count--;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};