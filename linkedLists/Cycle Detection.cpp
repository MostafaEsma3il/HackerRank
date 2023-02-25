

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    set<SinglyLinkedListNode*> st;
    
    while (head != NULL) {
        if (st.find(head) != st.end())
            return true;
        st.insert(head);
        head = head->next;
    }
    return false;
}

