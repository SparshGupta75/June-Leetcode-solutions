
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
        
    }
    
};

/////////////////////////////
//We can also use Lower Bound
/////////////////////////////

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        
    }
    
};
