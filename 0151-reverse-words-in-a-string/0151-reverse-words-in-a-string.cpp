#include <string>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        
        int n = s.length();
        int writeIdx = 0;
        for (int readIdx = 0; readIdx < n; readIdx++) {
            if (s[readIdx] != ' ') {
                if (writeIdx != 0) {
                    s[writeIdx] = ' ';
                    writeIdx++;
                }
                int wordStart = writeIdx;
                while (readIdx < n && s[readIdx] != ' ') {
                    s[writeIdx] = s[readIdx];
                    writeIdx++;
                    readIdx++;
                }
                reverse(s.begin() + wordStart, s.begin() + writeIdx);
            }
        }
        s.resize(writeIdx);
        
        return s;
    }
};