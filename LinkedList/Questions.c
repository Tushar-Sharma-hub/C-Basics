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

void noofnodes(struct Node*head){ //no of nodes in LL.
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    printf("The number of Nodes:%d\n",count);
}

void noofevenoddnodes(struct Node*head){ //no of even/odd data nodes in LL.
    int count=0,c1=0;
    while(head!=NULL){
        if(head->data%2 == 0){
            count++;
        }
        else c1++;
        head=head->next;
    }
    printf("The number of even nodes:%d\n",count);
    printf("The number of odd nodes:%d\n",c1);

}

void noofprime(struct Node* head){
    int count=0;
    while(head!=NULL){
        int num=head->data;
        if(num>=2){
            int isPrime=1;
            for(int i=2;i*i<=num;i++){  //i*i<=num for less time complexity.
                if(num%i==0){
                    isPrime=0;
                    break;
                }
            }
            if(isPrime) count++;
        }
        head=head->next;
    }
    printf("The number of primes:%d\n",count);
}

void sum(struct Node*head){ //sum of ll
    int sum=0;
    while(head!=NULL){
        sum+=head->data;
        head=head->next;
    }
    printf("The sum of the given ll data is:%d\n",sum);
}

void max(struct Node*head){ //max in ll
    int max=0;
    while(head!=NULL){
        if(head->data>max){
            max=head->data;
        }
        head=head->next;
    }
    printf("Max element:%d\n",max);
}

void mean(struct Node*head){
    float mean;
    int sum=0,n=0;
    while(head!=NULL){
        sum+=head->data;
        n++;
        head=head->next;
    }
    mean=(float)sum/n;
    printf("Mean:%.2f",mean);
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    struct Node*five;

    //Allocate memory for nodes in linked lists in Heap.
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    five=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next = second;

    second->data=15;
    second->next = third;

    third->data=3;
    third->next = fourth;

    fourth->data=54;
    fourth->next=five;

    five->data=77;
    five->next=NULL;

    linkedlisttraversal(head);

    noofnodes(head);

    noofevenoddnodes(head);

    noofprime(head);

    sum(head);

    max(head);

    mean(head);

    return 0;
}