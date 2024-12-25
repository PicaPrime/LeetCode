#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        map<int, int> m;
        int result = 0;

        for(int i=0 ; i< nums.size() ; i++) {
            m[nums[i]]++;
        }

        for(int i = 0 ; i< nums.size()-1 ; i++){
            int first = nums[i];
            for(int j = i +1 ; j < nums.size() ; j++){
                int second = nums[j];
                int sum = first + second;
                if(sum % 2 == 0 && m.find(sum / 2) != m.end()){
                    result++;
                    m[sum / 2]--;
                    m[first]--;
                    m[second]--;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {1,2,1,4,1};
    cout << "Result for nums1: " << solution.countSubarrays(nums1) << endl;

    // Test Case 2
    vector<int> nums2 = {2, 4, 6, 8};
    cout << "Result for nums2: " << solution.countSubarrays(nums2) << endl;

    // Test Case 3
    vector<int> nums3 = {1, 3, 5, 7};
    cout << "Result for nums3: " << solution.countSubarrays(nums3) << endl;

    return 0;
}
