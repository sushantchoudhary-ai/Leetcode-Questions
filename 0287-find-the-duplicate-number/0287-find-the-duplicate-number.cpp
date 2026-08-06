class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int next=1;
        while(next<nums.size())
            {
                if(nums[start]==nums[next])
                    {
                        return nums[start];
                    }
                start++;
                next++;
            }
        return nums[start];
    }
};