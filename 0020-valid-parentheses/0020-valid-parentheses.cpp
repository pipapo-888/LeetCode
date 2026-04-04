class Solution {
private:
    int is_open_bracket(char c)
    {
        if (c == '[' || c == '(' || c == '{' )
            return 1;
        return 0;
    }

    int check_same(int open, int close)
    {
    if (open == '(' && close == ')')
        return (1);
    if (open == '[' && close == ']')
        return (1);
    if (open == '{' && close == '}')
        return (1);
    return (0);
    }

public:
    bool isValid(string s) {
        vector<char> c;

        for (int i = 0; s[i]; i++)
        {
            if (is_open_bracket(s[i]))
                c.push_back(s[i]);
            else if (!c.empty() && check_same(c.back(), s[i]))
                c.pop_back();
            else
                return false;
        }
        if (!c.empty())
            return false;
        return true;
    }
};