class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> s(nums.size(),1);
        vector <int> a(nums.size(),1);
        int product1=1;
        int product2=1;
        int left=1;
        int right=nums.size()-2;
        while(left<nums.size() && right>=0)
        {
            product1=product1*nums[left-1];
            s[left]=product1;
            product2=product2*nums[right+1];
            a[right]=product2;
            left++;
            right--;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=a[i]*s[i];
        }
        return nums;
        
    }
};