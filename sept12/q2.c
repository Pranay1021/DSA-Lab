//To implement stack using linked list 
#include <stdio.h>
#include <stdlib.h>
struct node{
    int rollno;
    float cgpa;
    struct node *next;
};
struct node *top=NULL;
int count=1;
void push(){
    struct node *new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Memory not available\n");
    }
    printf("Enter the roll of the student no %d:\n",count);
    scanf("%d",&new->rollno);
    printf("Enter the cgpa of the student no %d:\n",count);
    scanf("%f",&new->cgpa);
    new->next=top;
    top=new;
    count++;
    return;
}
void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow\n");
        return;
    }
    printf("The popped student info is rollno %d and cgpa %f \n",top->rollno,top->cgpa);
    temp=top;
    top=top->next;
    free(temp);
    count--;
}
void display(struct node *disp){
    if(disp==NULL){
        printf("Stack is empty.\n");
    }
    if(disp->next==NULL){
        printf("\n");
        printf("The roll of the student is %d and cgpa is %.2f\n",disp->rollno,disp->cgpa);
        return;
    }
    display(disp->next);
    printf("The roll of the student is %d and cgpa is %.2f",disp->rollno,disp->cgpa);
}
int main(){
    int n=7;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Push the info of the student\n2.pop\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    if(n==1){
        push();
    }
    else if(n==2)
        {pop();
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