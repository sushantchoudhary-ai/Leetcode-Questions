#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        if (a.size() < 2)
            return a;

        sort(a.begin(), a.end());

        vector<vector<int>> z;

        int start = a[0][0];
        int end = a[0][1];

        int right = 1;

        while (right < a.size()) {
            if (end >= a[right][0]) {
                end = max(end, a[right][1]);
            } else {
                z.push_back({start, end});

               
                start = a[right][0];
                end = a[right][1];
            }
            right++;
        }
        z.push_back({start, end});

        return z;
    }
};