

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if (llist->next == NULL)
        return NULL;
    if (position == 0)
        return llist->next;
    SinglyLinkedListNode* tmp = llist;
    int cnt = 0;
    while (cnt +1 < position){
        llist = llist->next;
        cnt++;
    }
    llist->next = llist->next->next;
    return tmp;
}

