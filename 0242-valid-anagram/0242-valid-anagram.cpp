class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;
        unordered_map<char,int> c;
        if (s.size()!=t.size())
        {
            return false;
        }
        for (char x:s)
        {
            a[x]++;
        }
        for(int y:t)
        {
            c[y]++;
        }
        int start=0;
        while(start<s.size())
        {
            if((a.find(s[start])!=a.end()) && (c.find(s[start])!=c.end()))
            {
                if(a[s[start]]!=c[s[start]])
                {
                    return false;
                }
            }
            else{
                return false;
            }
            start++;
        }

    return true;

    }
};