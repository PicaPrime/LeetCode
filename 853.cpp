#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> arr;

        for(int i=0 ; i < position.size(); i++){
            arr.push_back({position[i], speed[i]});
        }
        sort(arr.begin(), arr.end());
        stack<double> s;

        
    }
};


int main() {
    // Test case
    int target = 12;
    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};

    Solution solution;
    solution.carFleet(target, position, speed);

    return 0;
}