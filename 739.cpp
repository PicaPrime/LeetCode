#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <pair<int, int>>s; // value & index
        vector<int> result(temperatures.size(),0);

        for(int i=0 ; i< temperatures.size(); i++){
            while(!s.empty()){
                if(s.top().first >= temperatures[i]){
                    break;
                }
                int x = i - s.top().second;
                result[s.top().second] = x;
                s.pop();
            }
            s.push({temperatures[i], i});
        }
        return result;
    }
};

int main(){
    
}