/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    int line1[100] = {0}, line2[100] = {0}, ans[210] = {0};
    int size1 = 0, size2 = 0;

    while(l1)
    {
        line1[size1] = l1->val;
        l1 = l1->next;
        size1++;
    }
    while(l2)
    {
        line2[size2] = l2->val;
        l2 = l2->next;
        size2++;
    }
    
    int i = 0, temp1, temp2, temp;

    while(1)
    {
        ans[i] += line1[i] + line2[i];
        if (ans[i] >= 10)
        {
            ans[i] -= 10;
            ans[i + 1]++;    
        }
        i++;
        if (i >= size1 && i >= size2)
            break ;
    }
    if (ans[i] == 0)
        ans[i] = -1;
    else
        ans[i + 1] = -1;
    
    i = 0;
    struct ListNode* ansNode = malloc(sizeof(struct ListNode));
    if (!ansNode)
        return (NULL);
    ansNode->next = NULL;

    struct ListNode* head = ansNode;
    while(ans[i] != -1)
    {
        ansNode->val = ans[i];
        i++;
        if (ans[i] != -1)
        {
            ansNode->next = malloc(sizeof(struct ListNode));
            if (!ansNode->next)
                return (NULL);
            ansNode = ansNode->next;
            ansNode->next = NULL;
        }
    }
    return (head);
}