class Solution {
public:
    int maxProduct(int n) {
        int maxprod = 0;
        int i=0;
        int arr[10];
        int k=0;
        while(n!=0)
        {
            arr[i++] = n%10;
            n=n/10;
        }
        
        for(int j=0;j<i;j++)
        {
            for(int k = j+1;k<i;k++)
            {
                maxprod = max(maxprod,arr[j]*arr[k]);
            }
        }
        return maxprod;
    }
};