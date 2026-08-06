class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int p=-1;
        for(int i=nums.size()-1;i>0;i--)
            {
                if (nums[i]>nums[i-1])
                    {
                        p=i-1;
                        break;
                    }
            }
        if(p==-1)
        {
        reverse(nums.begin(),nums.end());
        return;
        }
        int min = -1;

        for (int i = p + 1; i < nums.size(); i++)
            {
                if (nums[i] > nums[p])
                    {
                        if (min == -1 || nums[i] <=  nums[min])
                                min = i;
                    }
            }
        swap(nums[p],nums[min]);
        int left = p + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

    }
};