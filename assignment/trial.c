#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void displayList(struct node* head){
    struct node* temp=head;
    printf("\nThe elements in the list :- \n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}

void createList(struct node* head,int x){
    char ch;
    int i=1;
    printf("Enter the value of node %d of List %d:- ",i,x);
    scanf("%d",&head->data);
    head->next=NULL;
    getchar();
    printf("Press y to continue adding elements :- ");
    scanf("%c",&ch);
    struct node* temp=head;
    while(ch!='n'){
        i++;
        temp->next=(struct node*)malloc(sizeof(struct node));
        if(temp->next==NULL){
            printf("Out of memory space");
            exit(0);
        }
        temp=temp->next;
        printf("Enter the value of node %d of List %d:- ",i,x);
        scanf("%d",&temp->data);
        temp->next=NULL;
        getchar();
        printf("Press y to continue adding elements :-");
        scanf("%c",&ch);
    }
    displayList(head);
}

void mergeList(struct node* head1,struct node* head2){
    struct node *temp1=head1;

    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=head2;
    printf("\nMerged List :-\n");
    displayList(head1);
}



int main(){
    struct node* head1=(struct node *)malloc(sizeof(struct node));
    struct node* head2=(struct node *)malloc(sizeof(struct node));

    createList(head1,1);
    createList(head2,2);
    mergeList(head1,head2);
    return 0;
}