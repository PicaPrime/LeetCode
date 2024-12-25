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

        ListNode *head = NULL;

        if (!list1) return list2; // If list1 is empty, return list2
        if (!list2) return list1; // If list2 is empty, return list1

        if (list1->val <= list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        ListNode *result = head;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                head->next = list1;
                list1 = list1->next;
            }
            else
            {
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next;
        }

        while (list1 != NULL)
        {
            head->next = list1;
            list1 = list1->next;
            head = head->next;
        }

        while (list2 != NULL)
        {
            head->next = list2;
            list2 = list2->next;
            head = head->next;
        }

        return result;
    }
};