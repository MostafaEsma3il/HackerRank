

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* node;
    SinglyLinkedListNode* tmp;
    
    while(head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            if (tmp == NULL) {
                node = new SinglyLinkedListNode(head1->data);
                tmp = node;
            }
            else {
                node->next = new SinglyLinkedListNode(head1->data);;
                node = node->next;
            }
            head1 = head1->next;
        }
        else {
            if (tmp == NULL) {
                node = new SinglyLinkedListNode(head2->data);
                tmp = node;
            }
            else {
                node->next = new SinglyLinkedListNode(head2->data);
                node = node->next;
            }
            head2 = head2->next;
        }
    }
    while (head1 != NULL) {
        if (tmp == NULL) {
                node = new SinglyLinkedListNode(head1->data);
                tmp = node;
            }
        else {
            node->next = new SinglyLinkedListNode(head1->data);;
            node = node->next;
        }
        head1 = head1->next;
    }
    while (head2 != NULL) {
        if (tmp == NULL) {
                node = new SinglyLinkedListNode(head2->data);
                tmp = node;
            }
        else {
            node->next = new SinglyLinkedListNode(head2->data);
            node = node->next;
        }
        head2 = head2->next;
    }
    
    return tmp;
}

