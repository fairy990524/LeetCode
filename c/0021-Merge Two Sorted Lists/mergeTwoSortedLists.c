/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL && l2 == NULL)
        return NULL;
    else if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
    
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    struct ListNode *tmp = head;
    while(l1 && l2){
        if(l1->val < l2->val){
            tmp->next = l1;
            l1 = l1->next;
        }
        else{
            tmp->next = l2;
            l2 = l2->next;
        }
        tmp = tmp->next;
    }
    if(l1)
        tmp->next = l1;
    else if(l2)
        tmp->next = l2;
    
    return head->next;
}