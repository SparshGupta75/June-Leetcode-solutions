
class Solution {
public:
    int findDuplicate(vector<int>& n) {
        
        for(int i=0;i<n.size();i++)
        {
            int index=abs(n[i])-1;
            n[index]*=(-1);
            if(n[index]>0) 
                return abs(n[i]);
        }
        return -1;
    }
};
