[Sorted Link List to BST](https://practice.geeksforgeeks.org/problems/sorted-list-to-bst/1)
```cpp
class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        if(!head) return NULL;
        if(!head->next) return new TNode(head->data);
        LNode* slow=head;
        LNode* fast=head;
        LNode* mid=head;
        while(fast && fast->next)
        {
            mid=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        mid->next=NULL;
        TNode* curr=new TNode(slow->data);
        curr->left=sortedListToBST(head);
        curr->right=sortedListToBST(slow->next);
        return curr;
    }
};
```
