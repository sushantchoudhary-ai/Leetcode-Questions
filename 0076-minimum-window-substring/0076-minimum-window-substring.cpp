class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> mp;
        unordered_map<char, int> a;
        for (char x : t) 
        {
            mp[x]++;
        }
        int window_size = 0;
        int t_requirement = mp.size();
        int left = 0;
        int right = 0;
        int start = 0;
        int end = 0;
        int old_length = INT_MAX;

        while (right < s.size()) {
            while (left < s.size() && mp.find(s[left]) == mp.end()) {
                if (left == right) {
                    left++;
                    right++;
                } else {
                    left++;
                }
            }
            
            if (right >= s.size()) break;

            if (mp.find(s[right]) != mp.end()) {
                a[s[right]]++;
                if (a[s[right]] == mp[s[right]]) {
                    window_size++;
                }
                right++;
            } else {
                right++;
            }

            while (window_size == t_requirement) {
                int length = right - left;
                if (old_length > length) {
                    start = left;
                    end = right;
                    old_length = length;
                }

                a[s[left]]--;
                if (a[s[left]] < mp[s[left]]) {
                    window_size--;
                }
                left++;

                while (left < right && mp.find(s[left]) == mp.end()) {
                    left++;
                }
            }
        }
        if (old_length != INT_MAX) {
            return s.substr(start, old_length);
        } else {
            return "";
        }
    }
};