#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); 
        int beg = 0, end = nums.size() - 1;
        while (beg <= end) {
            int mid = beg + (end - beg) / 2;
            
            if (nums[mid] == target) {
                result[0] = mid;     
                end = mid - 1;      
            } else if (nums[mid] < target) {
                beg = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        beg = 0; 
        end = nums.size() - 1;
        while (beg <= end) {
            int mid = beg + (end - beg) / 2;
            
            if (nums[mid] == target) {
                result[1] = mid;     
                beg = mid + 1;       
            } else if (nums[mid] < target) {
                beg = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return result;
    }
};