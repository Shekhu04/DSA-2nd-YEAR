class Solution {
public:
    bool isNodePresent(ListNode *head, ListNode *node) {
        while (head != NULL) 
        {
            if (head == node)
            {
                return true;
            }
            head = head->next;
        }
        return false;
    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        while (head1 != NULL) {
            if (isNodePresent(head2, head1)) {
                return head1;
            }
            head1 = head1->next;
        }
        return NULL;
    }
};
