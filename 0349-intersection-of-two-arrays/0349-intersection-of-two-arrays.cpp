class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s;
        int start=0;
        int beg=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(start<nums1.size() && beg<nums2.size())
            {
                if(nums1[start]==nums2[beg]) 
                    {   if(s.empty()||nums1[start]!=s.back())
                            {   s.push_back(nums1[start]);
                                start++;
                                beg++;
                            }
                        else{
                            start++;
                            beg++;
                        }
                    }
                else if(nums1[start]<nums2[beg])
                    {
                        start++;
                    }
                else{
                    beg++;
                }
                
            }
        return s;
    }
};