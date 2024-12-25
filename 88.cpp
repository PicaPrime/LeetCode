#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int r = m + n - 1;
        int j = n - 1;

        while (j >= 0) {
            if (i >= 0 && nums2[j] <= nums1[i]) {
                nums1[r] = nums1[i];
                i--;
            } else {
                nums1[r] = nums2[j];
                j--;
            }
            r--;
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Array with extra space for nums2
    int m = 3; // Number of initialized elements in nums1
    vector<int> nums2 = {2, 5, 6}; // Elements to merge into nums1
    int n = 3; // Number of elements in nums2

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
