class Solution {

    void dfs(int open, int close, string str, int n, vector<string> &ans)
    {
        if (open == n && close == n)
        {
            ans.push_back(str);
            return ;
        }
        if (open < n)
            dfs(open + 1, close, str + "(", n, ans);
        if (close < open)
            dfs(open, close + 1, str + ")", n, ans);
    }


public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        dfs(0, 0, "", n, ans);

        return ans;
    }
};