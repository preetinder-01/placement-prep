class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.empty())
        {s1.push(x);return;}
        else
        {
            while(!s1.empty())
            {
                int z=s1.top();
                s1.pop();
                s2.push(z);
                
            }
            s2.push(x);
            while(!s2.empty())
            {
                int z=s2.top();
                s2.pop();
                s1.push(z);
                
            }
            return;
        }
    }
    
    int pop() {
        int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */