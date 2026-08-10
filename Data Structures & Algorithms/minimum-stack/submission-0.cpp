class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minStack;

public:
    MinStack() {}

    void push(int val) 
    {
        if (stack.empty())
        {
            stack.push(val);
            minStack.push(val);
        }
        else
        {
            stack.push(val);
            minStack.push(std::min(val, minStack.top()));
        }
    }

    void pop() 
    {
        stack.pop();
        minStack.pop();
    }

    int top() 
    {
        return stack.top();
    }

    int getMin() 
    {
        return minStack.top();
    }
};