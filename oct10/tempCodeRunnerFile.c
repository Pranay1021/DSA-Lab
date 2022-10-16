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
        return;
    }
    rear->next=new;
    rear=new;
    rear->next=NULL;

}
void deque(){
    struct queue *temp=malloc(sizeof(struct queue));
    temp=top;
    top=top->next;
    free(temp);

}
void display(struct queue *disp){
    disp=top;
    while(disp->next!=NULL){
        printf("%d ",disp->data);
    }

}
int main(){
enque();
deque();
display(top);
}