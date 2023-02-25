

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int ans = -1;
    stack<SinglyLinkedListNode*> stk1, stk2;
    while (head1 != NULL) {
        stk1.push(head1);
        head1 = head1->next;
    }
    while (head2 != NULL) {
        stk2.push(head2);
        head2 = head2->next;
    }
    while (stk1.size() && stk2.size() && stk1.top() == stk2.top()) {
        ans = stk1.top()->data;
        stk1.pop();
        stk2.pop();
    }
    return ans;
}

