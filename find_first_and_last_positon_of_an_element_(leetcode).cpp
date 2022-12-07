class Solution {
public:
    int firstocc(vector<int>& nums,int target)
    {
        int ans=-1;
        int beg=0;
        int end=nums.size()-1;
        while(beg<=end)
        {
            int mid=(beg+end)/2;
            if(nums[mid]==target)
               {
                   ans=mid;
                   end=mid-1;
               }
               else if(nums[mid]>target)
               end=mid-1;
               else
               beg=mid+1;
        }
        return ans;
    }
    int lastocc(vector<int>& nums,int target)
    {
        int ans=-1;
        int beg=0;
        int end=nums.size()-1;
        while(beg<=end)
        {
            int mid=(beg+end)/2;
            if(nums[mid]==target)
               {
                   ans=mid;
                   beg=mid+1;
               }
               else if(nums[mid]>target)
               end=mid-1;
               else
               beg=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int t1,t2;
        vector<int> ans;
        t1=firstocc(nums,target);
        t2=lastocc(nums,target);
        ans.push_back(t1);
        ans.push_back(t2);
        return ans;
        
    }
};
