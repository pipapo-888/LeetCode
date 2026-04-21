class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans = 0;

        for(int i = 0; i < s.size(); i++)
        {
            vector<bool> v(128, false);
            for (int j = i; j < s.size(); j++)
            {
                if (v[s[j]])
                    break ;
                else
                {
                    ans = max(ans, j - i + 1);
                    v[s[j]] = true;
                }
            }
        }
        return (ans);
    }
};