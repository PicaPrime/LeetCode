#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        map<int, int> counts;
        for(int i=0 ; i < nums1.size() ; i++){
            counts[nums1[i]]++;
        }
        vector<int> result;
        for(int i=0 ; i < nums2.size(); i++){
            if(counts.find(nums2[i]) != counts.end() && counts[nums2[i]] > 0){
                result.push_back(nums2[i]);
                counts[nums2[i]]--;
            }
        }

        return result;
    }
};


// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

//         int l = 0;
//         int r = 0;

//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

//         vector<int> result;

//         while (l < nums1.size() && r < nums2.size()) {
//             if (nums1[l] > nums2[r]) {
//                 r++;
//             }
//             else if (nums1[l] < nums2[r]) {
//                 l++;
//             }
//             else {
//                 result.push_back(nums1[l]);
//                 l++;
//                 r++;
//             }
//         }

//         return result;
//     }
// };