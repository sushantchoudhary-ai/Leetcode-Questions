class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start=0;
        int next=0;
        int i=0;
        string s="";
        while(start<word1.size() && next<word2.size())
        {
            if(i%2==0)
            {
                s=s+word1[start];
                start++;
                i++;
            }
            else{
                s=s+word2[next];
                next++;
                i++;
            }
        }
        if(word1.size()>word2.size())
        {
            while(start<word1.size())
            {
                s=s+word1[start];
                start++;
            }
        }
        else{
            while(next<word2.size())
            {
                s=s+word2[next];
                next++;
            }
        }
    return s;
    }
};