#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int oldarea=0;
        int beg=0;
        int end=heights.size()-1;
        while(beg<end)
            {   int area;
                int s= min(heights[beg],heights[end]);
                area=s*(end-beg);
                if(area>oldarea)
                    {
                        oldarea=area;
                    }
                if(heights[beg]>heights[end])
                    {
                        end--;
                    }
                else{
                    beg++;
                }
            }
        return oldarea;
    }
};