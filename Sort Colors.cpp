
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
                    break;
            }
        }
        
    }
};
