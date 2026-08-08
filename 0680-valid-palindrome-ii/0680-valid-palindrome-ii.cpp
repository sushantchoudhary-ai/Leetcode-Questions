class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                int l1 = left + 1;
                int r1 = right;
                bool path1_valid = true;
                while (l1 < r1) {
                    if (s[l1] != s[r1]) {
                        path1_valid = false;
                        break;
                    }
                    l1++; r1--;
                }
                int l2 = left;
                int r2 = right - 1;
                bool path2_valid = true;
                while (l2 < r2) {
                    if (s[l2] != s[r2]) {
                        path2_valid = false;
                        break;
                    }
                    l2++; r2--;
                }
                return path1_valid || path2_valid;
            } else {
                left++;
                right--;
            }
        }
        return true; 
    }
};