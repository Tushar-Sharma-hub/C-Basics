#include<stdio.h>
#define size 10
int stack[size];
int top=-1;
int is_empty(){
    return(top==-1);
}
int isfull(){
    return(top==size-1);
}
void push(int x){
    if(isfull()){
        printf("Overflow\n");
        return ;
    }
    else { 
        stack[++top]=x;
        printf("Pushed element %d into the stack.\n",x);
    }
}
void pop(){
    if(is_empty()){
        printf("Underflowed\n");
        return;
    }
    else {
        top--;
        printf("Popped successfully\n");
    }
}
void topelement(){
    if(is_empty()){
        printf("Underflowed\n");
        return ;
    }
    else{
        printf("The top element is %d\n",stack[top]);
    }
}
int main(){
    push(7);
    push(8);
    push(9);
    pop();
    pop();
    topelement();
}