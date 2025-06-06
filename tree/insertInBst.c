//is binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void insert(struct node*root,int key){
    struct node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("Cannot insert already in Tree.");
            return ;
        }
        else if(key<root->data) root=root->left;
        else root=root->right;
    }
    struct node*new=createNode(key);
    if(key<prev->data){
        prev->left=new;
    }
    else prev->right=new;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node* p=createNode(7);
    struct node* p1=createNode(4);
    struct node* p2=createNode(11);
    struct node* p3=createNode(2);
    struct node* p4=createNode(5);
    struct node* p5=createNode(9);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;

    printf("Before insertion:\n");
    inorder(p);
    insert(p,99);
    printf("\nAfter insertion:\n");
    inorder(p);

    return 0;
}
