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

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* u = new ListNode(-1);
        ListNode* v = u;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                v->next = list1;
                list1 = list1->next;
                v = v->next;
            }
            else {
                v->next = list2;
                list2 = list2->next;
                v = v->next;
            }
        }

        while(list1 != NULL){
            v->next = list1;
            v = v->next;
            list1 = list1->next;
        }

        while(list2 != NULL){
            v->next = list2;
            v = v->next;
            list2 = list2->next;
        }
        return u->next;

    }
};

int main()
{
}