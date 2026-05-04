class Solution {

    bool is_open(char c)
    {
        if (c == '{' || c == '[' || c == '(')
            return 1;
        return 0;
    }

    bool is_match(char open, char close)
    {
        if (open == '[' && close == ']')
            return true;
        if (open == '{' && close == '}')
            return true;
        if (open == '(' && close == ')')
            return true;
        return false;
    }

public:
    bool isValid(string s) {
        stack<char> stack;

        for (int i = 0; i < s.size(); i++)
        {
            if (is_open(s[i]))
                stack.push(s[i]);
            else if (!stack.empty() && is_match(stack.top(), s[i]))
                    stack.pop();
            else
                return false;
        }
        return stack.empty();
    }
};