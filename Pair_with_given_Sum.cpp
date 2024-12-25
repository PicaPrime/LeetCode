
#include <iostream>
#include <vector>
#include <array>
#include <bits/stdc++.h>

using namespace std;

vector<int> sumPair(int arr[], int n, int target)
{
    vector<int> v;
    for (int i = 0; i < n - 1; i++)
    {
        int firstNumber = arr[i];

        for (int j = i + 1; j < n; j++)
        {

            int secondNumber = arr[j];

            if (firstNumber + secondNumber == target)
            {
                v.push_back(firstNumber);
                v.push_back(secondNumber);
                return v;
            }
        }
    }

    return v;
}

vector<int> sumPair2(int arr[], int n, int target){
    sort(arr, arr+n); // nlogn

    int left = 0;
    int right = n-1;

    vector<int> v;

    while(left < right){
        int sum = arr[left] + arr[right] ;
        if(sum > target){
            right--;
        }
        else if(sum < target){
            left++;
        }
        else{
            v.push_back(arr[left]);
            v.push_back(arr[right]);
            return v;
        }
    }

    return v;

}

vector<int> sumPair3(int arr[], int n, int target){

    vector<int> v;

    map <int, bool> hashmap;

    for(int i = 0 ; i< n ; i++){
        int firstNumber = arr[i];
        int secondNumber = target - arr[i];

        if(hashmap[secondNumber]){
            v.push_back(firstNumber);
            v.push_back(secondNumber);
            return v;
        }

        hashmap.insert(pair<int, bool> (firstNumber, true));
    }

    return v;

}

int main()
{
    // std::cout << "Hello World";

    int arr[] = {1, 2, 3, 10, 5};

    vector<int> result = sumPair3(arr, 5, 12);

    cout << result[0] << " " << result[1] << endl;

    return 0;

}
