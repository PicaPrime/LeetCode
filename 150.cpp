#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0 ; i < tokens.size() ; i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop(); 
                if(tokens[i] == "+"){
                    s.push(to_string(a+b));
                }
                else if(tokens[i] == "-"){
                    s.push(to_string(a-b));
                }
                else if(tokens[i] == "*"){
                    s.push(to_string(a*b));
                }
                else if(tokens[i] == "/"){
                    s.push(to_string(int(a/b)));
                }
            }
            else s.push(tokens[i]);

        }

        return stoi(s.top());
    }
};

int main(){

    int a = int(13/5);
    cout << a;
}