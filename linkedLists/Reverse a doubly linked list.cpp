

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if (llist == nullptr)
        return nullptr;
    stack<DoublyLinkedListNode*> stk;
    while (llist != nullptr) {
        stk.push(llist);
        llist = llist->next;
    }
    DoublyLinkedListNode* tmp = stk.top();
    DoublyLinkedListNode* tmp2 = stk.top();
    
    stk.pop();
    tmp->prev = nullptr;
    while (stk.size()) {
        tmp->next = stk.top();
        stk.top()->prev = tmp;
        tmp = tmp->next;
        stk.pop();
    }
    tmp->next = nullptr;
    return tmp2;
}

