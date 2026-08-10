class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        int prod;
        while(n!=0)
        {
            a.push_back(n%10);
            n=n/10;
        }
        sort(a.begin(),a.end());
        prod=a[a.size()-1]*a[a.size()-2];
        return prod;
    }
};