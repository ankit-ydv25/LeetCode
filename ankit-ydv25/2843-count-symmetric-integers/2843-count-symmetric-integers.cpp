class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            int p=i;
            int sum=0;
            int count1=0;
            while(p!=0)
            {
                sum += p%10;
                count1++;
                p /=10;
            }
            if(count1 % 2 != 0)
                continue;
            int q=i;
            int count2=0;
            int sum2=0;
            while(count2!=count1/2)
            {
                sum2 +=q%10;
                count2++;
                q /=10;
            }
            if(sum-sum2 == sum2)
            {
                count++;
            }

        }
        return count;

    }
};