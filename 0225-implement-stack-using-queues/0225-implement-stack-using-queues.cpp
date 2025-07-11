class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int num;
        while(!q1.empty()){
            num = q1.front();
            q1.pop();
            if(q1.empty()){
                break;
            }
            q2.push(num);
        }
        swap(q1, q2);
        return num;
    }
    
    int top() {
        int num;
        while(!q1.empty()){
            num = q1.front();
            q1.pop();
            q2.push(num);
        }
        swap(q1, q2);
        return num;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */