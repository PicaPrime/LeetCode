#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;

        int left = 0;
        int right = height.size() - 1;

        while(left < right){
            int w = abs(right - left);
            int h = min(height[left], height[right]);
            int t = w*h;

            if(t > area){
                area = t;
            }
            if(height[left] <= height[right]) left++;
            else right--;

        }

        return area;
    }
};

int main(){

}