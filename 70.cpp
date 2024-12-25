#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n < 2) return n;
        int a = 1;
        int b = 2;
        n = n -2;
        while((n)--){
            int temp = a + b;
            a = b;
            b = temp;
        } 

        return b;
    }
};