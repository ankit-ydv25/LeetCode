class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=0;
        for(i = num.length()-1;i>=0;i--)
        {
            if(num[i]!='0')
            {
                break;
            }
        }
        string nums ;
        for(int j=0;j<=i;j++)
        {
            nums.push_back(num[j]);
        }
        return nums;
    }
};