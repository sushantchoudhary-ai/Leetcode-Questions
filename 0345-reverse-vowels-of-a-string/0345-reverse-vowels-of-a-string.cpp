class Solution {
public:
    string reverseVowels(string s) {
        string vowels="AEIOUaeiou";
        int left=0;
        int right=s.size()-1;
        while(left<=right)
            {
                if ((vowels.find(s[left]) != string::npos) && (vowels.find(s[right]) != string::npos))
                    {
                        swap(s[left],s[right]);
                        left++;
                        right--;
                    }
                else if(vowels.find(s[left]) == string::npos)
                    {
                        left++;
                    }
                else if(vowels.find(s[right]) == string::npos)
                    {
                        right--;
                    }    
                else{
                    left++;
                    right--;
                }
            }
        return s;
    }
};