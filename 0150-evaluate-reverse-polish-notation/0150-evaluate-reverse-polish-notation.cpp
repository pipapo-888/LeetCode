using namespace std;

class Solution {

    bool is_operator(string s)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
            return true;
        return false;
    }

public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        
        for (string& s: tokens)
        {
            if (!is_operator(s))
                stack.push(stoi(s));
            else
            {
                int b = stack.top(); stack.pop();
                int a = stack.top(); stack.pop();
                if (s == "*")
                    stack.push(a * b);
                else if (s == "/")
                    stack.push(a / b);
                else if (s == "-")
                    stack.push(a - b);
                else
                    stack.push(a + b);                    
            }
        }
        return (stack.top());

    }
};