class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int next=1;

        while(next<nums.size())
            {   if(nums[start]!=0)
                    {
                        start++;
                        if(start==next)
                            {
                                next++;
                            }
                    }

                else if(nums[next]==0)
                    {
                        next++;
                    }
                else if(nums[start]==0)
                    {
                        swap(nums[start],nums[next]);
                        start++;
                        next++;
                    }
            }
        
    }
};