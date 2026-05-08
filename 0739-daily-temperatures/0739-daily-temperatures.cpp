class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Stackを使う課題 なにも分からない
        // とりあえず１文字ずつ見ていく

        vector<int> ans(temperatures.size(), 0);
        stack<int> stack;

        for (int i = 0; i < temperatures.size(); i++)
        {
            while (!stack.empty() && temperatures[stack.top()] < temperatures[i])
            {
                ans[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }

        return ans;
    }
};