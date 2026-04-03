/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int check_len(struct ListNode* head)
{
    int i = 1;

    while (head->next)
    {
        printf("%d ", head->val);
        head = head->next;
        i++;
        printf("%d ", i);
    }
    return i;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode* tmp = head; 
    int len = check_len(head);

    for (int i = 1; i < len - n; i++)
        tmp = tmp->next;
    
    if (len == n)
        head = head->next;
    else
        tmp->next = tmp->next->next;
    return (head);
}