//20ms 15.8MB
//最小堆 + 栈
class MinStack {
public:

    vector<int> sk;
    vector<int> s;

    MinStack() 
    {

    }
    
    void push(int val) 
    {
        sk.push_back(val);
        int i = sk.size() - 1;
        while (i > 0)
        {
            if (sk[i] < sk[(i - 1) / 2])
            {
                swap(sk[i], sk[(i - 1) / 2]);
                i = (i - 1) / 2;
            }
            else
            {
                break;
            }
        }
        s.push_back(val);
    }
    
    void pop() 
    {
        for (int i = 0; i < sk.size(); i++)
        {
            if (sk[i] == s[s.size() - 1])
            {
                sk[i] = sk[sk.size() - 1];
                break;
            }
        }
        sk.pop_back();
        for (int i = 0; i < sk.size(); i++)
        {
            if (i * 2 + 1 < sk.size()) if (sk[i * 2 + 1] < sk[i]) swap(sk[i], sk[i * 2 + 1]);
            if (i * 2 + 2 < sk.size()) if (sk[i * 2 + 2] < sk[i]) swap(sk[i], sk[i * 2 + 2]);
        }
        s.pop_back();
    }
    
    int top() 
    {
        return s[s.size() - 1];
    }
    
    int getMin() 
    {
        return sk[0];
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