class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

    if (digits.empty()) {
        return ans;
    }

    unordered_map<char, string> map = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    
    dfs(digits, 0, "", ans, map);

    return ans;
};

    void dfs(string digits, int pos, string comb, vector<string>& ans, const unordered_map<char, string> map)
    {
        if (pos == digits.length())
        {
            ans.push_back(comb);
            return ;
        }
        string letters =  map.at(digits[pos]);
        for (char letter: letters)
            dfs(digits, pos + 1, comb + letter, ans, map);
    }
};