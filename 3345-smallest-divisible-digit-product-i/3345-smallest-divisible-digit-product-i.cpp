class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {   int m=n;
            int s=1;
        while(m>0)
            {
                s=s*(m%10);
                m=m/10;
            }
        if(s%t==0)
            {
                return n;
            }
        else{
            n=n+1;
        }
        }
    }
};