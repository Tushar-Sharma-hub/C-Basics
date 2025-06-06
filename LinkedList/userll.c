#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

struct Node*create(int n){
    struct Node*head=NULL,*temp=NULL,*newnode=NULL;
    int value;
    for(int i=1;i<=n;i++){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value of %d nodes:",i);
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }
    return head;
}

int main(){
    int n;
    printf("Enter no of nodes\n:");
    scanf("%d",&n);
    create(n);
 }