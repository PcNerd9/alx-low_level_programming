#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* add_nodeint(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    return newNode;
}

void print_listint_safe(Node* head) {
    Node* current = head;
    
    // Traverse the list and keep track of visited nodes
    while (current != NULL) {
        printf("%d ", current->data);

        // If the next node has already been visited, it's a cycle
        if (current->next <= current) {
            printf("... ");  // Indicate the start of a cycle
            break;
        }

        current = current->next;
    }

    printf("\n");
}

int main() {
    Node* head = NULL;
    Node* node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    
    // Create a circular link
    Node* circularNode = add_nodeint(&head, 98);
    circularNode->next = node; // Making the circular link
    
    print_listint_safe(head);

    // Don't forget to free the allocated memory

    return 0;
}

