#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
void linkedlisttraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//CASE 1
struct Node* deletefirstnode(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//CASE 2
struct Node* deletenodebetween(struct Node*head,int pos){
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=1;i<pos-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//CASE 3
struct Node* deletelastnode(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
//CASE 4 Delete a node with a given value.
struct Node* deletewithValue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=NULL;

    linkedlisttraversal(head);

    // // head=deletefirstnode(head);
    // // printf("After deletion of first node:\n");
    // // linkedlisttraversal(head);

    head=deletenodebetween(head,2);
    printf("After deletion in between nodes:\n");
    linkedlisttraversal(head);

    // // head=deletelastnode(head);
    // // printf("After deleting last node:\n");
    // // linkedlisttraversal(head);

    // head=deletewithValue(head,8);
    // printf("After deleting node with value:\n");
    // linkedlisttraversal(head);
}