class Solution {
public:
    int binarysearch(int x)
    {
        int start=0;
        int end=x;
        long long int ans=-1;
        long long int square;
        while(start<=end)
        {
            long long int mid=start+(end-start)/2;
            square=mid*mid;
            if(square==x)
                return mid;
            else if(square>x)
                end=mid-1;
            else
            { ans=mid;
                start=mid+1;}
            
        }
       return ans; 
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};
