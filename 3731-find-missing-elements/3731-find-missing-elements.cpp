class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> a;
        vector<int> s;
        for(int y:nums)
        {
            a[y]++;
        }
        for(int i=nums[0];i<=nums[nums.size()-1];i++)
        {
            if(a.find(i)==a.end())
            {
                s.push_back(i);
            }
        }
        return s;
    }
};