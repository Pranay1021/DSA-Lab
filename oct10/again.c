//To implement stack using linked list 
#include <stdio.h>
#include <stdlib.h>
struct student{
    int roll;
    int height;
    int weight;
};
struct node{
    struct student stud;
    struct node *next;
};
void push(struct node **top,struct student s){
    struct node *new=malloc(sizeof(struct node));
    new->stud=s;
    if(new==NULL){
        printf("Memory not available\n");
    }
    new->next=*top;
    *top=new;
}
struct student pop(struct node **top){
    struct node *temp;
    if(top==NULL){
        printf("Stack underflow\n");
    }
    struct student pop=(*top)->stud;
    temp=(*top);
    (*top)=(*top)->next;
    free(temp);
    return pop;
}
void display(struct node *top){
    printf("\n");
    struct node *disp;
    disp=top;
    if(disp==NULL){
        printf("Stack is empty.\n");
    }
    printf("The data in the stack are:\n");
    while(disp!=NULL){
        printf("The roll of the student is %d \nThe weight is %d \nThe height is %d\n",disp->stud.roll,disp->stud.weight,disp->stud.height);
        printf("\n");
        disp=disp->next;
    }
    printf("\n");
}
struct node * sort(struct node *top){
    struct node *temp=NULL;
    if(top==NULL){
        printf("stack underflow");
        return top;
    }
    push(&temp,pop(&top));
   while(top!=NULL){
    struct student b;
    b=pop(&top);
    while(b.roll  < temp->stud.roll && temp!=NULL){
         push(&top,pop(&temp));
         }
    push(&temp,b);
   }
    return temp;
}
void change_weight(struct node *top){
    int roll;
    printf("enter the roll to change weight\n");
    scanf("%d",&roll);
    while(top!=NULL){
    if(top->stud.roll==roll){
        printf("Enter new weight");
        scanf("%d",&top->stud.weight);
        return;
    }
    top=top->next;
    }
}
int main(){
    struct node *top=NULL;
    struct student s;
    int n=7;
    int a;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Push\n2.pop\n3.Display\n4.Exit\n5.Sort\n6.Change weight\n");
    scanf("%d",&n);
    if(n==1){
        printf("Enter the roll of student\n");
         scanf("%d",&s.roll);
        printf("Enter the height of student\n");
         scanf("%d",&s.height);
        printf("Enter the weight of student\n");
         scanf("%d",&s.weight);
        push(&top,s);
    }
    else if(n==2)
        {
            pop(&top);
            }
    else if(n==3){
        display(top);
        }
    else if(n==4){ 
        printf("Bye-Bye");
        return 0;
        }
    else if(n==5){
        printf("sorted stack is :");
        top=sort(top);
        display(top);
    }
    else if(n==6){
        change_weight(top);
    }
    else{
        printf("Invalid Operation\n");
    }
}
return 0;
}