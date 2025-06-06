#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* copyLL(struct Node* head) {
    if (head == NULL) return NULL;

    struct Node* newHead = (struct Node*)malloc(sizeof(struct Node));
    newHead->data = head->data;
    newHead->next = NULL;

    struct Node* originalTemp = head->next;
    struct Node* copyTemp = newHead;

    while (originalTemp != NULL) {
        copyTemp->next = (struct Node*)malloc(sizeof(struct Node));
        copyTemp = copyTemp->next;
        copyTemp->data = originalTemp->data;
        copyTemp->next = NULL;

        originalTemp = originalTemp->next;
    }

    return newHead;
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* five;

    // Allocate memory for nodes in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 54;
    fourth->next = five;

    five->data = 77;
    five->next = NULL;

    printf("Original Linked List:\n");
    linkedListTraversal(head);

    printf("After Copy:\n");
    struct Node* copiedHead = copyLL(head);
    linkedListTraversal(copiedHead);

    return 0;
}
