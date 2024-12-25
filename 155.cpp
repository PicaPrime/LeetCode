#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
    stack<int> s;
    int min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(val < min){
            min = val;
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top() == min){
            
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
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