class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0) return {};
        sort(changed.begin(),changed.end());
        vector<int> realAns;
        unordered_map<int,int> ans;
        for(int x: changed)
        {
            ans[x]++;
        }
        for(int x: changed)
        {
            if(ans[x]==0) continue;
            if(ans[2*x]==0)
            {
                return {};
            }
            realAns.push_back(x);
            ans[x]--;
            ans[2*x]--;
        }
        return realAns;
    }
};