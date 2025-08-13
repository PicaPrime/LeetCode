#include<iostream>
#include<vector>


using namespace std;

// Brute Force Solution 
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int result = nums[0];

//         for(int i=0 ; i< nums.size(); i++){
//             int sum = nums[i];
//             result = max(result, sum);
//             for(int j=i+1; j < nums.size(); j++){
//                 sum += nums[j];
//                 result = max(sum, result);
//             }
//         }

//         return result;
//     }
// };

// Kadanes Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current_sum = nums[0];
        int global_sum = nums[0];

        for(int i=1 ; i < nums.size(); i++){
            current_sum = max(nums[i], current_sum + nums[i]);
            global_sum = max(current_sum, global_sum);
        }

        return global_sum;
    }
};

