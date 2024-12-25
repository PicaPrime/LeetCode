#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            int first = numbers[left];
            int second = numbers[right];
            int sum = first + second;
            if(sum > target){
                right--;
            }
            else if(sum < target){
                left++;
            }
            else {
                return {left, right};
            }
        }
        return {};
    }
};

int main(){

}