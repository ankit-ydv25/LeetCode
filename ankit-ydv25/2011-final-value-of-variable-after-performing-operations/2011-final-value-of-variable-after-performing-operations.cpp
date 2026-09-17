class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int size = operations.size();
        for(int i=0;i<size;i++)
        {
            if((int)operations[i][1]== 43 )
            {
                x +=1;
            }
            else{
                x -=1;
            }
        }
        return x;
    }
};