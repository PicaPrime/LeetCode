#include<iostream>
#include<stack>
using namespace std;


// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
class MinStack {
public:
    stack<int> s;
    stack<int> minS;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minS.empty()){
            s.push(val);
            minS.push(val);
        }
        else if(val < minS.top()){
            s.push(val);
            minS.push(val);
        }
        else{
            s.push(val);
            minS.push(minS.top());
        }
    }
    
    void pop() {
        s.pop();
        minS.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
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

int main(){

}