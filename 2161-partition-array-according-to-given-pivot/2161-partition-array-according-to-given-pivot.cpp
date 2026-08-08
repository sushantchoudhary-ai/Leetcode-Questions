class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int left=0;
        int right=nums.size()-1;
        vector<int> s=nums;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>pivot)
            {
                nums[right--]=s[i];
            }
            else if(s[i]<pivot)
            {
                nums[left++]=s[i];
            }
        }
        for(int j=left;j<=right;j++)
        {
            nums[j]=pivot;
        }

        reverse(nums.begin()+right+1,nums.end());
        return nums;
    }
};