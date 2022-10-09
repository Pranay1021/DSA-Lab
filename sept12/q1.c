//To implement stack using linked list 
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(){
    struct node *new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not available\n");
    }
    printf("Enter the data to push\n");
    scanf("%d",&new->data);
    new->next=top;
    top=new;
}
void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow\n");
        return;
    }
    printf("The popped number is %d \n",top->data);
    temp=top;
    top=top->next;
    free(temp);
}
void display(){
    printf("\n");
    struct node *disp;
    disp=top;
    if(disp==NULL){
        printf("Stack is empty.\n");
    }
    printf("The data in the stack are:\n");
    while(disp!=NULL){
        printf("%d ",disp->data);
        disp=disp->next;
    }
    printf("\n");
}
int main(){
    int n=7;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Push\n2.pop\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    if(n==1){
        push();
    }
    else if(n==2)
        {pop();
            }
    else if(n==3){
        display();
        }
    else if(n==4){ 
        printf("Bye-Bye");
        return 0;
        }
    
    else{
        printf("Invalid Operation\n");
    }
}
return 0;
}