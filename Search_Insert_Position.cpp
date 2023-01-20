class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,mid;
        int end=nums.size()-1;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            if(start==end)
            { if(nums[start]<target)
                return start+1;
                 else
                     return start;
            }
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else 
                start=mid+1;
        }
        return mid;
        
    }
};
