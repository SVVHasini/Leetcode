class MinStack {
public:
    
    vector<int>stack;
    vector<int>minstack;
    MinStack() 
    {
    }
    
    void push(int val) 
    {
        stack.push_back(val);
        if(minstack.empty()||val<=minstack.back())
        {
            minstack.push_back(val);
        }
    }
    
    void pop() 
    {
        if(minstack.back()==stack.back())
        {
            minstack.pop_back();
        }
        stack.pop_back();
    }
    
    int top() 
    {
        return stack.back();
    }
    
    int getMin() 
    {
        return minstack.back();
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