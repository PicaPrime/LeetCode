#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){
            return 0;
        }
        int l = 0;
        int r = 1;
        int maxProfit = 0;

        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxProfit;
    }
};


int main(){

}