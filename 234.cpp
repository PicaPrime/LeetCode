#include<iostream>
#include<vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// using an array 
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {

//         vector<int> nums;
//         ListNode* root = head;

//         while(root){
//             nums.push_back(root->val);
//             root = root->next;
//         }

//         int l = 0;
//         int r = nums.size() - 1;

//         while(l < r){
//             if(nums[l] != nums[r]){
//                 return false;
//             }
//             l++;
//             r--;
//         }

//         return true;

//     }
// };

class Solution {
public:

    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* reversed = reverseLinkedList(slow);

        ListNode* curr = head;
        while (reversed){

            if(curr->val != reversed->val){
                return false;
            }

            curr = curr->next;
            reversed = reversed->next;
        }

        return true;

    }
};