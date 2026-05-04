class MinStack {
public:

    std::stack<int> stack;
    std::stack<int> stack_min;

    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if (stack_min.empty() || val <= stack_min.top())
            stack_min.push(val);
    }
    
    void pop() {
        if (!stack_min.empty() && stack.top() == stack_min.top())
            stack_min.pop();
        stack.pop();
    }
    
    int top() {
        return (stack.top());
    }
    
    int getMin() {
        return (stack_min.top());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */