#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void update(struct Node* head, int nv, int ov){
    while(head!=NULL){
        if(head->data==ov){
            head->data=nv;
            break;
        }
        head=head->next;
    }
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;

    //Allocate memory for nodes in linked lists in Heap.
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //Link first and second nodes.
    head->data=7;
    head->next = second;
    //Link second and third node.
    second->data=11;
    second->next = third;
    //Terminate the lists at the third node.
    third->data=15;
    third->next = NULL;

    printf("Before Updation:\n");
    linkedlisttraversal(head);
    printf("After Updation:\n");
    update(head,7,11);
    linkedlisttraversal(head);
    return 0;
}