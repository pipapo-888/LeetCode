class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str;
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int res = str.find(s[i]);
            if (res != string::npos)
                str.erase(0, res + 1);
            str.push_back(s[i]);
            ans = max<int>(str.length(), ans);
            cout << str << endl;
        }
        return ans;
    }
};