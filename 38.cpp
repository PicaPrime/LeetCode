#include<iostream>

using namespace std;


class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";  // Base case
        string res = "1";
        for (int i = 0; i < n-1; i++) {
            int p = 0;
            int count = 1;
            string temp = "";

            while(p < res.length()){
                if(p+1 < res.length() && res[p] == res[p+1]){
                    count ++;
                    p++;
                }
                else{
                    temp += to_string(count) + res[p];
                    p++;
                    count = 1;
                }
            }
            res = temp;
        }

        return res;
    }
};


int main(){
    Solution o;
    cout << o.countAndSay(5);
}