#include<iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head;
        ListNode* current = head;
        while(l1 && l2){
            int sum = l1->val + l2->val;
            sum += carry;
            carry = 0;
            if(sum > 9){
                ListNode* temp = new ListNode(sum % 10);
                carry = sum / 10;
                current->next = temp;
            }
        }
    }
};

