

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* tmp = llist;
    while (llist->next != NULL && llist->data < data)
        llist = llist->next;
    if (llist->data >= data){
        node->prev = llist->prev;
        node->next = llist;
        if (llist->prev == NULL)
            tmp = node;
        else 
            llist->prev->next = node;
        llist->prev = node;
    }
    else {
        node->prev = llist;
        node->next = NULL;
        llist->next = node;
    }
    return tmp;
}

