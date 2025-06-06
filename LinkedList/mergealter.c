#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to traverse and print the linked list
void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to merge two linked lists back-to-back
struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct Node* temp = head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

// Function to merge two linked lists alternatively
struct Node* mergeListsAlternatively(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct Node *temp1 = head1, *temp2 = head2;
    struct Node *next1, *next2;

    while (temp1 != NULL && temp2 != NULL) {
        next1 = temp1->next; // Store next node of list1
        next2 = temp2->next; // Store next node of list2

        temp1->next = temp2; // Link first list node to second list node
        if (next1 == NULL) break; // If first list ends, stop

        temp2->next = next1; // Link second list node to next first list node

        temp1 = next1; // Move forward in first list
        temp2 = next2; // Move forward in second list
    }
    return head1; // Return merged list
}

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating first linked list: 1 -> 3 -> 5 -> NULL
    struct Node* head1 = createNode(1);
    head1->next = createNode(3);
    head1->next->next = createNode(5);

    // Creating second linked list: 2 -> 4 -> 6 -> NULL
    struct Node* head2 = createNode(2);
    head2->next = createNode(4);
    head2->next->next = createNode(6);

    printf("First Linked List: ");
    linkedListTraversal(head1);
    printf("Second Linked List: ");
    linkedListTraversal(head2);

    // Merge the two linked lists alternatively
    struct Node* mergedHead = mergeListsAlternatively(head1, head2);
    printf("Merged Linked List (Alternatively): ");
    linkedListTraversal(mergedHead);

    return 0;
}
