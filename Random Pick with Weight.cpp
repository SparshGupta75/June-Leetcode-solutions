class Solution {
    
    vector<int> v;
    int count=0;
    
public:
    Solution(vector<int>& w) {
        
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        for(int i:w)
        {
            count+=i;
            v.push_back(count);
        }
        
    }
    
    int pickIndex() {
        
        int x = rand()%count;
        auto itr = upper_bound(v.begin(),v.end(),x);
        return itr-v.begin();
        
    }
};

