class Solution {
public:
    int romanToInt(string s) {
        long long num=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                num = num+1;
            }
            if(s[i]=='V')
            {
                if(i > 0 && s[i-1]=='I')
                {
                    num -=1;
                    num +=4 ;
                }
                else{
                num = num+5;
                }
            }
            if(s[i]=='X')
            {
                if(i > 0 && s[i-1]=='I')
                {
                    num -=1;
                    num +=9;
                }
                else
                {
                    num = num+10;
                }
            }
            if(s[i]=='L')
            {
                if(i > 0 && s[i-1]=='X')
                {
                    num -=10;
                   num += 40; 
                }
                else
                {
                   num = num+50; 
                }
            }
            if(s[i]=='C')
            {
                if(i > 0 && s[i-1]=='X')
                {
                    num -=10;
                   num += 90; 
                }
                else
                {
                    num = num+100;
                }
            }
            if(s[i]=='D')
            {
                if(i > 0 && s[i-1]=='C')
                {
                    num -=100;
                    num += 400 ;
                }
                else
                {
                    num = num+500;
                }
            }
            if(s[i]=='M')
            {
                if(i > 0 && s[i-1]=='C')
                {
                    num -=100;
                    num += 900;
                }
                else
                {
                    num = num+1000;
                }
            }
        }
        return num;
    }
};