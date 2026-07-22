class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int found=0;
        int beg=0;
        int end=nums.size()-1;
        while(beg<=end)
            {
                mid=(beg+end)/2;
                if(nums[mid]==target)
                    {   found=1;
                        return mid;
                    }
                else if(nums[mid]>target)
                    {
                        end=mid-1;
                    }
                else if(nums[mid]<target)
                    {
                        beg=mid+1;
                    }
            }
        if (found==1)
        return mid;
        else{
            return -1;
        }
        
    }
};