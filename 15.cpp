#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int i = 0; i < nums.size() - 2; i++)
        {

            if( i >0 && nums[i] == nums[i-1]) continue;

            int first = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int second = nums[left];
                int third = nums[right];
                int sum = first + second + third;

                if (sum < 0)
                {
                    left++;
                }
                else if (sum > 0)
                {
                    right--;
                }
                else
                {
                    result.push_back({first, second, third});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
            }

        }

        return result;
    }
};

int main()

{
    Solution o;
    vector<int> u = {{-1,0,1,2,-1,-4}};
    vector < vector<int> > v;
    v = o.threeSum(u);
    for(auto x : v){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
}