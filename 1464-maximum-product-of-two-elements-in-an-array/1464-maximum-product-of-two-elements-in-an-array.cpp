class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int maxa=INT_MIN;
        int maxb=INT_MIN;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>maxa)
                    {   
                        maxb=maxa;
                        maxa=nums[i];
                    }
                else if(nums[i]>maxb)
                    {
                        maxb=nums[i];
                    }
            }
        product=(maxa-1)*(maxb-1);
        return product;
    }
};