class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> vec(128, 0);

        for (char c : s)
            vec[c]++;
        for (char c : t)
        {
            vec[c]--;
            if (vec[c] < 0)
                return false;
        }
        return true;
    }
};