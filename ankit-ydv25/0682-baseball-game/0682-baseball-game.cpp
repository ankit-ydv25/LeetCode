class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int sum =0;
        int n = operations.size();
        for(int i=0;i<n;i++)
        {
            int m = ans.size();
            if(operations[i]=="+")
            {
                ans.push_back(ans[m-1]+ans[m-2]);
                sum +=ans[m-1]+ans[m-2];
            }
            else if(operations[i]=="C")
            {
                ans.pop_back();
                sum -= ans[m-1];
            }
            else if(operations[i]=="D")
            {
                ans.push_back(2*ans[m-1]);
                sum += 2*ans[m-1];
            }
            else{
                ans.push_back(stoi(operations[i]));
                 sum += stoi(operations[i]);
            }
        }
        return sum;
    }
};