class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;
    MedianFinder() {
        
    }
    void addNum(int num) {
        // Step 1: always push into max-heap first
        if (mx.empty() || num <= mx.top())
            mx.push(num);
        else
            mn.push(num);

        if (mx.size() > mn.size() + 1) {
            mn.push(mx.top());
            mx.pop();
        } else if (mn.size() > mx.size()) {
            mx.push(mn.top());
            mn.pop();
        }
    }
    
    double findMedian() {
        if (mx.size() == mn.size())
            return (mx.top() + mn.top()) / 2.0;
        return mx.top();
    }
};
