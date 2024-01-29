#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void delete(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; 
        free(temp); 
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL){
        return;
    }

    prev->next = temp->next;

}

void printList(struct Node* node) {
    printf("[");
    while (node != NULL) {
        printf("%d, ", node->data);
        node = node->next;
    }
    printf("NULL]\n");
}

int main() {
    struct Node* head = NULL;

    push(&head, 3);
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);

    printf("Linked list after adding elements: ");
    printList(head);
    delete(&head, 3);

    printf("Linked list after deleting element: ");
    printList(head);

    return 0;
}