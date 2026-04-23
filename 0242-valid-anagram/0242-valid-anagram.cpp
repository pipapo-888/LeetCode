class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> vec(128, 0);

        for (int i = 0; i < s.size(); i++)
            vec[s[i]]++;
        for (int i = 0; i < t.size(); i++)
        {
            vec[t[i]]--;
            if (vec[t[i]] < 0)
                return false;
        }
        return true;
    }
};