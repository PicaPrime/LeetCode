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
        int x = 0;
        int y = 0;
        long i = 1;
        while(l1){
            x += l1->val * 10;
            i *= 10;
            l1 = l1->next;
        }
        i = 1;
        while(l2){
             y += l2->val * 10;
             y *= 10;
             l2 = l2->next;
        }
        int result = x + y;
        ListNode* head;
        while(result != 0){
            int t = result % 10;
            result /= 10; 
            ListNode* a = new ListNode(t);
            head->next = a;
            head = head->next;
        }
        return head->next;
    }
};

int main(){

}