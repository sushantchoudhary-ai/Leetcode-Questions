#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int beg=0;
        int end=s.size()-1;
        while(beg<=end)
            {
                if((isalnum(s[beg])) && (isalnum(s[end])) && (tolower(s[beg])==tolower(s[end])))
                    {
                        beg++;
                        end--;
                    }
                else if(!isalnum(s[beg]))
                    {
                        beg++;
                    }
                else if(!isalnum(s[end]))
                    {
                        end--;
                    }
                else {
                    return false;
                }
            }
        return true;
    }
};