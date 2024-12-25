#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i=0 ; i < nums.size(); i++){
            m[nums[i]]++;
        }
        map<int , vector <int> > myMap;
        for(auto x : m){
            myMap[x.second].push_back(x.first);
        }

        vector <int> result ;

        for(auto i = myMap.rbegin() ; i != myMap.rend() ; i++){
            for(int i : i->second){
                if(k <= 0){
                    return result;
                }
                result.push_back(i);
                k--;
            }
        }
        return result;
    }
};

int main(){

    Solution o;
    vector<int> v = {1,1,2,2,2,3,3,500,500,500,500,500, 100};
    vector<int> r;
    r = o.topKFrequent(v, 3);

    for(auto x : r){
        cout << x << " ";
    }
}