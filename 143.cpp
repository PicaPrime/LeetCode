#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next == NULL || head == NULL) return;
        stack <ListNode*> s;
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            s.push(temp);
            temp = temp->next;
            n++;
        }
        ListNode* result = head;
        bool flag = false;
        if(n % 2 == 1){
            flag = true;
        }
        n = n / 2;
        while(n--){
            ListNode* t = head->next;
            head->next = s.top();
            s.pop();
            head = head->next;
            head->next = t;
        }
        if(flag){
            head->next = s.top();
            head = head->next;
        }
        head->next = NULL;

    }
};
int main(){
    
}