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
//CASE 1
struct Node * insertatfirst(struct Node*head,int data){
    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
//CASE 2
struct Node * insertInBetween(struct Node*head,int index,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}
//CASE 3
struct Node * insertAtEnd(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;
}
//CASE 4
struct Node* insertAfterNode(struct Node*head,struct Node*prevNode,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node*));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node*));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node*));

    //Link first and second nodes.
    head->data=7;
    head->next = second;
    //Link second and third node.
    second->data=11;
    second->next = third;
    //Terminate the lists at the third node.
    third->data=15;
    third->next = NULL;

    linkedlisttraversal(head);

    printf("After inserting at first:\n");
    head=insertatfirst(head,55);
    linkedlisttraversal(head);

    printf("After inserting in between:\n");
    head=insertInBetween(head,3,77);
    linkedlisttraversal(head);

    printf("After inserting at the end:\n");
    head=insertAtEnd(head,88);
    linkedlisttraversal(head);

    printf("After inserting node after second node:\n");
    head=insertAfterNode(head,second,99);
    linkedlisttraversal(head);
    return 0;
}