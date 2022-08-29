//menu driven operations in linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node* next;
};
void creation(struct node*ptr){
    int n,i=1;
    printf("Enter the number of elements you want in the list : \n");
    scanf("%d",&n);
     printf("Enter the data : \n");
    while(i<=n){
        struct node* curr=(struct node*)malloc(sizeof(struct node*));    
        scanf("%d",&ptr->info);
        ptr->next=curr;
        ptr=curr;
        i++;
    }
    ptr->next=NULL;
}
void traversal(struct node*ptr){
    printf("The values in the list are \n");
    while(ptr->next!=NULL){
        
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}
struct node* insertion_beginning(struct node *head){
    struct node* new=malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",&new->info);
    new->next=head;
    return new;
    
}
void deletion(struct node*ptr){
    int n,i=1;
    struct node*curr,*prev;
    curr=ptr;
    printf("Enter the position you want to delete :\n");
    scanf("%d",&n);
    while(i<n){
     prev=curr;
     curr=curr->next; 
     i++;  
    }
    prev->next=curr->next;
    free(curr);
}

int main(){
    struct node *start,*head;
    head=(struct node*)malloc(sizeof(struct node*));   
    start=head;
    int n=7;
    while(n!=5){
    printf("Enter the operation you want \n");
    printf("1.Creation\n2.Traversal\n3.Insertion at beginning\n4.deletion at a location\n5.Exit\n");
    scanf("%d",&n);
    if(n==1){
        creation(head);
        }
    else if(n==2){
        traversal(start);
        }
    else if(n==3){
        start=insertion_beginning(start);
        traversal(start);
        }
    else if(n==4)
        {
        deletion(start);
        traversal(start);
        }
    else if(n==5){
        printf("Bye Bye");
        return 0;
    }
    else{
        printf("Invalid operation ");
    }
    }
return 0;
}