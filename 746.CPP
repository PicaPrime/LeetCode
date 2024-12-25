#include<iostream>
using namespace std;

 class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() < 2) return cost[0];
        cost.push_back(0);
        for(int i = cost.size() - 2; i >= 0 ; i--){
            cost[i] = min(cost[i]+cost[i+1], cost[i]+cost[i+2]);
        }
        return min(cost[0], cost[1]);
    }
};