class Solution {
private:
    bool is_open_bracket(char c)
    {
        if (c == '[' || c == '(' || c == '{' )
            return true;
        return false;
    }

    bool check_same(char open, char close)
    {
    if (open == '(' && close == ')')
        return (true);
    if (open == '[' && close == ']')
        return (true);
    if (open == '{' && close == '}')
        return (true);
    return (false);
    }

public:
    bool isValid(string s) {
        vector<char> c;

        for (int i = 0; i < s.size(); i++)
        {
            if (is_open_bracket(s[i]))
                c.push_back(s[i]);
            else if (!c.empty() && check_same(c.back(), s[i]))
                c.pop_back();
            else
                return false;
        }
        return c.empty();
    }
};