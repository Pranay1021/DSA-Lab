//implementation of priority queue
#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    int priority;
    struct queue *next;
};
struct queue *top=NULL;
struct queue *rear=NULL;
void enque(){
    struct queue *p;
    struct queue *new=malloc(sizeof(struct queue));
    printf("Enter the data \n");
    scanf("%d",&new->data);
    printf("Enter the priority \n");
    scanf("%d",&new->priority);
    p=top;
    if(top==NULL && rear ==NULL){
        top=new;
        rear=new;
        rear->next=NULL;
    }
    else if(new->priority > top->priority){
        new->next=top;
        top=new;
    }
    else{
    while(new->priority <= p->next->priority && p->next!=NULL){
            p=p->next;
        }
        new->next=p->next;
        p->next=new;
            }
}
void deque(){
    struct queue *temp=malloc(sizeof(struct queue));
    temp=top;
    top=top->next;
    rear->next=top;
    free(temp);
}
void display(struct queue *disp){
    printf("\n");
    printf("The data along with the priority in the queue are: \n");
    while(disp->next!=NULL){
        printf("%d(%d) ",disp->data,disp->priority);
        disp=disp->next;
    }
    printf("%d(%d)\n",disp->data,disp->priority);
}
int main(){
int n=7;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Enque\n2.Deque\n3.Display\n4.Exit\n");
    scanf("%d",&n);
    if(n==1){
        enque();
    }
    else if(n==2)
        {deque();
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
}