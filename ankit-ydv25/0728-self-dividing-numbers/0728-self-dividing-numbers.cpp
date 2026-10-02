class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left<=right)
        {
            int z = left;
            bool valid = true;
            while(z!=0)
            {
                int p = z%10;
                if(p==0 || left%p!=0)
                {
                    valid = false;
                    break;
                }
                z /=10;
            }
            if(valid)
            {
                ans.push_back(left);
            }
            left++;
        }
        return ans;
    }
};
