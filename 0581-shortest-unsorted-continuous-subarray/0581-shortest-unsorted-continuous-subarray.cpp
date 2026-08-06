class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        int start=-1;
        int end=-2;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=max)
                {
                    max=nums[i];
                }
                else{
                    end=i;
                }
                int j=nums.size()-1-i;
                if(nums[j]<=min)
                    {
                        min=nums[j];
                    }
                else{
                    start=j;
                }
            }
        return end-start+1;
    }
};