#include <string>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        int skipS = 0, skipT = 0;

        while (i >= 0 || j >= 0) {
            // Find next valid character in s
            while (i >= 0) {
                if (s[i] == '#') {
                    skipS++;
                    i--;
                } else if (skipS > 0) {
                    skipS--;
                    i--;
                } else {
                    break;
                }
            }

            // Find next valid character in t
            while (j >= 0) {
                if (t[j] == '#') {
                    skipT++;
                    j--;
                } else if (skipT > 0) {
                    skipT--;
                    j--;
                } else {
                    break;
                }
            }

            // Compare actual characters
            if (i >= 0 && j >= 0 && s[i] != t[j]) {
                return false;
            }

            // Check if one string ended before the other
            if ((i >= 0) != (j >= 0)) {
                return false;
            }

            i--;
            j--;
        }

        return true;
    }
};