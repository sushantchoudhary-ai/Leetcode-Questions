class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> s;
        int start=0;
        int beg=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(start<nums1.size() && beg<nums2.size())
            {
                if(nums1[start]==nums2[beg])
                    {
                        s.push_back(nums1[start]);
                        start++;
                        beg++;
                    }
                else if (nums1[start]>nums2[beg])
                    {
                        beg++;
                    }
                else {
                    start++;
                }
            }
        return s;
    }
};