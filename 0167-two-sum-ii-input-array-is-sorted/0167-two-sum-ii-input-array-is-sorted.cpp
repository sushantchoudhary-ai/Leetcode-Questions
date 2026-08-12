class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int left=0;
        int right=n.size()-1;
        while(left<right)
        {
            if(n[left]+n[right]==target)
            {
                break;
            }
            else  if(n[left]+n[right]>target)
            {
                right--;
            }
            else{
                left++;
            }
        }
        return {left+1,right+1};
    }
};