class Solution {
public:
    int hammingWeight(int n) {
        vector<int> number;
        while(n>1)
        {
            number.push_back(n%2);
            n /=2;
        }
        number.push_back(n);
        int count =0;
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==1)
            {
                count++;
            }
        }
        return count;
    }
};