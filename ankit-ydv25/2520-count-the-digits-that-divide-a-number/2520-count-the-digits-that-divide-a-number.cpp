class Solution {
public:
    int countDigits(int num) {
        int z= num;
    int count = 0;
    while(z!=0){
        int p = z%10;
        if(num%p == 0)
        {
            count +=1;
        }
        z /=10;
    } 
    return count;
    }
};