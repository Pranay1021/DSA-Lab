//implementation of circular queue
#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *top=NULL;
struct queue *rear=NULL;
void enque(){
    struct queue *new=malloc(sizeof(struct queue));
    printf("ENter the data \n");
    scanf("%d",&new->data);
    if(top==NULL && rear ==NULL){
        top=new;
        rear=new;
        rear->next=new;
        return;
    }
    rear->next=new;
    rear=new;
    rear->next=top;
}
void deque(){
    struct queue *temp=malloc(sizeof(struct queue));
    temp=top;
    top=top->next;
    rear->next=top;
    free(temp);
}
void display(struct queue *disp){
    struct queue *start;
    start=disp;
    printf("\n");
    printf("The data in the queue are: \n");
    while(disp->next!=start){
        printf("%d ",disp->data);
        disp=disp->next;
    }
    printf("%d\n",disp->data);

}
int main(){
int n=7;
    while(n!=4){
    printf("Enter the operation you want :\n");
    printf("1.Enque\n2.Dequess\n3.Display\n4.Exit\n");
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