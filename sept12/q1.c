//To implement stack using linked list 
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

void push(struct node **top){
    struct node *new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not available\n");
    }
    printf("Enter the data to push\n");
    scanf("%d",&new->data);
    new->next=*top;
    *top=new;
}
void pop(struct node **top){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow\n");
        return;
    }
    printf("The popped number is %d \n",(*top)->data);
    temp=*top;
    (*top)=(*top)->next;
    free(temp);
}
void display(struct node *disp){
    printf("\n");
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
    struct node *top=NULL;
    int n=7;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Push\n2.pop\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    if(n==1){
        push(&top);
    }
    else if(n==2)
        {pop(&top);
            }
    else if(n==3){
        display(top);
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