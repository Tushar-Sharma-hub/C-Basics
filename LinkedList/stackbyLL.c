#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node *top=NULL;
struct node *getnode(int value){
    struct node* p=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    return p;
}
int isEmpty(){
    return(top==NULL);
}
void push(int x){
    struct node*p=getnode(x);
    p->next=top;
    top=p;
}
void pop(){
    if(isEmpty()) return ;
    struct node* p=top;
    top=top->next;
    free(p);
}
int peek(){
    if(isEmpty()) {
        printf("Empty.");
        return -1;
    }
    else return(top->data);
}
int main(){
    push(10);
    push(20);
    pop();
    printf("Top element:%d\n",peek());
    return 0;
}