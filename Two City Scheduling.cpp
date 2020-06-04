class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        vector<pair<int,int>> v;
        int ans=0;
        
        int n = costs.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({costs[i][0]-costs[i][1],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++)
        {
            ans+=costs[v[i].second][0];
        }
        for(int i=n/2;i<n;i++)
        {
            ans+=costs[v[i].second][1];
        }
        return ans; 
    }
};
