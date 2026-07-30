#include <string>
using namespace std;
using std::string;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string c="";
        bool ch=true;
        int j=-1;
        while ((ch==true) && (!strs.empty()))
            {   j=j+1;
                for(int i=0;i<strs.size();i++)
                    {
                        if (j >= strs[i].size() || strs[i][j] != strs[0][j])
                            {
                                ch=false;
                            }
                    }
                if(ch==true)
                    {
                        c=c+strs[0][j];
                    }
            }
        return c;

    }
};