/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    struct ListNode* cur = list1;

    if (list1->val > list2->val)
    {
        cur = list2;
        list2 = list2->next;
    }
    else
        list1 = list1->next;

    struct ListNode* ans = cur;

    while (list1 && list2)
    {
        if (list1->val > list2->val)
        {
            cur->next = list2;
            list2 = list2->next;
        }
        else
        {
            cur->next = list1;
            list1 = list1->next;
        }
        cur = cur->next;
    }
    if (!list1)
        cur->next = list2;
    else
        cur->next = list1;

    return  ans;
}