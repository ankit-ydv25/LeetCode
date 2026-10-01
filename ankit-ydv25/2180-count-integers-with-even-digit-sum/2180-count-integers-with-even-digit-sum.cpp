class Solution {
public:
    int countEven(int num) {
        int count=0;
        int z = 1;
        while(z!=num+1)
        {
            if(z<10)
            {
                if(z%2==0)
                {
                    count++;
                }
            }
            else{
                int p=z;
                int sum=0;
                while(p!=0)
                {
                    sum +=p%10;
                    p /=10;
                }
                if(sum%2==0)
                {
                    count++;
                }
            }
            z++;
        }
        return count;
    }
};