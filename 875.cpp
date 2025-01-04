#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = piles[0];
        for(int i=1 ; i < piles.size() ; i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }

        int l = 1;
        int r = max;

        int k = max;

        while(l <= r){
            int m = l + (r - l)/2;
            long long hours = 0;
            for(int i=0 ; i < piles.size(); i++){
                int mod = piles[i] % m;
                int x = piles[i] / m;
                if(mod > 0) x++;
                hours += x;
            }
            if(hours > h){
                l = m + 1; 
            }
            else if(hours <= h){
                r = m - 1;
            }
            
            if(hours <= h && m < k) k = m;
        }
        return k;
    }
};