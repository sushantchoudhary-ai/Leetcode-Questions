class Solution {
public:
    int maximumWealth(vector<vector<int>>& s) {
        int max=INT_MIN;
        for(int i=0;i<s.size();i++)
            {   int sum=0;
                for(int j=0;j<s[i].size();j++)
                    {
                        sum=sum+s[i][j];
                    }
                if(sum>max)
                    {
                        max=sum;
                    }
            }
        return max;
    }
};