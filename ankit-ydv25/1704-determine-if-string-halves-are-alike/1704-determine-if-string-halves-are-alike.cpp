class Solution {
public:
    bool halvesAreAlike(string s) {
        if(s.size()%2 != 0) return false;
        int n = s.size();
        int rightCount = 0;
        int leftCount = 0;
        for(int i = 0;i<n/2;i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' )
            {
                leftCount++;
            }
        }
        for(int i = n/2;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' )
            {
                rightCount++;
            }
        }
        return leftCount==rightCount;
    }
};