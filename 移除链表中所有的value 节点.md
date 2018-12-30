# 移除链表中所有的value节点

```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    if(head!=NULL)
    {
    struct ListNode* prev=head;
    struct ListNode* cur=head->next;
    while(cur!=NULL)
    {
        if(cur->val==val)
        {
        prev->next=cur->next;
        cur=cur->next;
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
    if(head->val==val)
    {
    struct ListNode* newhead=head->next;
    free(head);
        return newhead;
    }
    else
    {
        return head;
    }
    }
    else
        return NULL;
}

```

