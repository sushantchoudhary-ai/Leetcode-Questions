#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int currMax = 0;
        int oldMax = 0;

        for (int i = 0; i < nums.size(); i++) {
            int temp = max(currMax, oldMax + nums[i]);
            oldMax = currMax;
            currMax = temp;
        }

        return currMax;
    }
};