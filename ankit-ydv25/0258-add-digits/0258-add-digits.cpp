class Solution {
    int add(int num)
    {
        int sum=0;
        while(num!=0)
        {
            int z = num%10;
            sum += z;
            num /= 10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        int z=num;
        while(z>=10)
        {
            z = add(z);
        }
        return z;
    }
};