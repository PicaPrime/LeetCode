#include<iostream>
#include<vector>

using namespace std;

// Brute Force Solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int n = height.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                area = max(area, min(height[i], height[j]) * (j - i));
            }
        }
        return area;
    }
};


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l = 0;
        int r = height.size() - 1;

        while (l < r) {
            maxArea = max(maxArea, min(height[l], height[r]) * abs((r - l)));
            height[l] >= height[r] ? r-- : l++;
        }

        return maxArea;
    }
};



// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int area = 0;

//         int left = 0;
//         int right = height.size() - 1;

//         while (left < right) {
//             int w = abs(right - left);
//             int h = min(height[left], height[right]);
//             int t = w * h;

//             if (t > area) {
//                 area = t;
//             }
//             if (height[left] <= height[right]) left++;
//             else right--;

//         }

//         return area;
//     }
// };

