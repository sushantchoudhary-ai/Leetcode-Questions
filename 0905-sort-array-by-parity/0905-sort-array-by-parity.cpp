class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ans(nums.size());
        int start=0;
        int nxt=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans[start++]=nums[i];
            }
            else{
                ans[nxt--]=nums[i];
            }
        }
    return ans;
    }
};