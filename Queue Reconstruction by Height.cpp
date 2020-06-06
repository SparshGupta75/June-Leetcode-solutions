class Solution {
public:
    
    static bool comp(vector<int> a,vector<int> b)
    {
        return ((a[0]>b[0]) || (a[0]==b[0] && a[1]<b[1]));
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<vector<int>> v;
        sort(p.begin(),p.end(),comp);
        
        for(int i=0;i<p.size();i++)
        {
            v.emplace(v.begin()+p[i][1],p[i]);
        }
        return v;
    }
};
