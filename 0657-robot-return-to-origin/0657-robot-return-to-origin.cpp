class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> s(2,0);
        for (char i:moves)
        {
            if(i=='U')
            {
                s[1]=s[1]+1;
            }
            else if(i=='D')
            {
                s[1]--;
            }
            else if(i=='R')
            {
                s[0]++;
            }
            else{
                s[0]--;
            }
        }
        if(s[0]==0 && s[1]==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};