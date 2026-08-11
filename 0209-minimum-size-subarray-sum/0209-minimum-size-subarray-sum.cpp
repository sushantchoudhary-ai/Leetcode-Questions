class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int curr=0;
        int min=INT_MAX;
        int window;
        for(int i=0;i<nums.size();i++)
        {
            curr=curr+nums[i];
            while(curr>=target)
            {
                window=i-left+1;
                if(window<min)
                {
                    min=window;
                }
                curr=curr-nums[left];
                left++;
            }
        }
    if(min==INT_MAX)
    {
        return 0;
    }
    else{
        return min;
    }
    }
};