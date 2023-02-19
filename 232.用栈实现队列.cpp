/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
    private: stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(x);
    }
    
    int pop() {
       
       while(!s1.empty())
       {
        s2.push(s1.top());
        s1.pop();
       }
       int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
        while(!s1.empty())
       {
        s2.push(s1.top());
        s1.pop();
       }
        return s2.top();
       
    }
    
    bool empty() {
        return s1.empty()&&s2.empty() ? true:false;
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
// @lc code=end

