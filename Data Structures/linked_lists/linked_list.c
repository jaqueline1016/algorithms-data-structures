#include <stdio.h>

struct Node {
    // an object for storing a single node of a linked list
    // models two atrrributes - data and the link to the next node in the list  
    int data;
    struct Node* next;
} ;

// function to insert a new node at the beginning of the linked list
void insertAtHead(struct Node** head_ref, int new_data) {
    // function to insert a new node at the beginning of the linked list
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    // put in the data
    new_node->data = new_data;
    // link the old list to the "next" of the new node
    new_node->next = (*head_ref);
    //move the head to point to the new node 
    (*head_ref) = new_node;
}

// function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next; // move to the next node using the arrow operator
    }
}

// function to free the memory allocated for the linked list head
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head; // store the current head in a temporary variable
        head = head->next; // move the head to the next node
        free(temp); // free the memory allocated for the current node
    }
    printf("Memory freed successfully.\n");
}

int main() {
    struct Node* head = NULL; // initialize the head of the linked list to NULL

    // insert some nodes at the beginning of the linked list
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

    printf("Linked List: ");
    printList(head); // print the linked list

    freeList(head); // free the memory allocated for the linked list

    return 0;
}
