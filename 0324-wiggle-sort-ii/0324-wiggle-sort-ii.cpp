class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=(nums.size()-1)/2;
        int end=nums.size()-1;
        vector<int> s=nums;
        nums.clear();
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                nums.push_back(s[start--]);
            }
            else{
                nums.push_back(s[end--]);
            }
        }}
};