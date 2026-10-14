class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(int i=1;i<edges.size();i++)
        {
            if(edges[i][0]==edges[0][0])
            {
                return edges[0][0];
            }
        }
        return edges[0][1];
    }
};