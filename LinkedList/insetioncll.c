#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* create(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newnode = NULL;
    int value;

    for (int i = 1; i <= n; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value of node %d: ", i);
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    if (temp != NULL)
        temp->next = head; // Making it circular

    return head;
}

// Function to display the circular linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

struct Node* insertatfirst(struct Node* head, int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    if (head == NULL) {
        temp->next = temp;  // Single node pointing to itself
        return temp;
    }
    struct Node* last = head;
    while (last->next != head) {
        last = last->next;
    }
    temp->next = head;
    last->next = temp;
    return temp;  // New head
}


int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node* head = create(n);
    display(head);
    
    printf("After inserting at first:\n");
    head=insertatfirst(head,7);
    display(head);
    return 0;
}
