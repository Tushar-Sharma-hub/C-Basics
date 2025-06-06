#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* left;
    int data;
    struct Node* right;
};

struct Node* create(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newnode = NULL;
    int value;

    for (int i = 1; i <= n; i++) {
        printf("Enter the value of node %d: ", i);
        scanf("%d", &value);

        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->right = newnode;
            newnode->left = temp;
            temp = newnode;
        }
    }
    return head;
}

// Display function to print forward traversal
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Doubly Linked List (Forward):\n");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->right;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = create(n);
    display(head);

    return 0;
}
