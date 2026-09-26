class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int dublicate = x;
        while(dublicate!=0)
        {
            sum = sum + dublicate%10;
            dublicate /=10;
        }
        if(x%sum==0) return sum;
        return -1;
    }
};