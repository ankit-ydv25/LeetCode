class Solution {
public:
    int titleToNumber(string columnTitle) {
       int count =0;
        for(char c : columnTitle)
        {
            int flag = c-'A' +1;
            count = count*26 + flag;
        }
        return count; 
    }
};