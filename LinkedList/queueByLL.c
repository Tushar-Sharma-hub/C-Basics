#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

// Create a new node
struct node* getnode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Check if queue is empty
int isEmpty() {
    return (front == NULL);
}

// Enqueue (Insert element at rear)
void enqueue(int value) {
    struct node* temp = getnode(value);
    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

// Dequeue (Remove element from front)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Nothing to dequeue.\n");
        return;
    }
    struct node* temp = front;
    front = front->next;

    // If queue becomes empty
    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

// Peek (Front element)
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    return front->data;
}

// Display all elements in the queue
void display() {
    struct node* temp = front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();              // Output: Queue: 10 20 30
    printf("Front: %d\n", peek());  // Output: Front: 10
    dequeue();
    display();              // Output: Queue: 20 30
    printf("Front: %d\n", peek());  // Output: Front: 20
    return 0;
}
