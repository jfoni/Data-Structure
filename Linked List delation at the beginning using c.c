#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    head = NULL;  // Use NULL instead of 0
    int input;

    printf("If you want to create a linked list then type 1:\n");
    scanf("%d", &input);

    while (input) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {  // Check for malloc failure
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data:\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;  // Use NULL instead of 0

        if (head == NULL) {  // If first node
            head = temp = newnode;
        } else {  // Insert at last
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? (0/1):\n");
        scanf("%d", &input);
    }

    // Delete first node
    if (head == NULL) {
        printf("List is empty!\n");
    } else {
        temp = head;
        head = head->next;  // Move head to the second node
        free(temp);  // Free the first node
    }

    // Display the list after deletion
    temp = head;
    printf("Updated Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
