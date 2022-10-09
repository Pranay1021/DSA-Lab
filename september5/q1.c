//menu driven operations in circular double linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
    struct node *prev;
};
void creation(struct node* ptr){
    char ch;
    int i=1;
    printf("Enter the value of node %d :- ",i);
    scanf("%d",&ptr->info);
    getchar();
    printf("Press y to add n to exit :- ");
    scanf("%c",&ch);
    struct node* curr,*start;
    start=ptr;
    ptr->next=start;
    ptr->prev=start;

    while(ch!='n'){
        i++;
        curr=(struct node*)malloc(sizeof(struct node));
        ptr->next=curr;
        curr->prev=ptr;
        ptr=ptr->next;
        if(ptr->next==NULL){
            printf("Out of memory space");
            exit(0);
        }
        printf("Enter the value of node %d :- ",i);
        scanf("%d",&curr->info);
        getchar();
        printf("Press y to add n to exit :- ");
        scanf("%c",&ch);
    }
    ptr->next=start;
    start->prev=ptr;
}

void traversal(struct node*ptr){
    struct node *start=ptr;
    printf("The values in the list are \n");
    while(ptr->next!=start){
        printf("%d ",ptr->info);
        ptr=ptr->next;
        
    }
    printf("%d ",ptr->info);
    printf("\n");
}
struct node* insertion_last(struct node *head){
    struct node *start=head;
    struct node* new=malloc(sizeof(struct node));
    printf("Enter the value :\n");
    scanf("%d",&new->info);
    while(head->next!=start){
        head=head->next;
    }  
    head->next=new;
    new->prev=head;
    new->next=start;
    start->prev=new;
}
struct node* deletion(struct node*ptr){
    int m,i=1;
    struct node *curr,*previous,*start;
    start=ptr;
    curr=ptr;
    printf("Enter the position you want to delete :\n");
    scanf("%d",&m);
    if(m==1){
        previous=start->prev;
        start=ptr->next;
        start->prev=previous;
        previous->next=start;
        free(curr);
        return start;

    }
    while(i<m){
     previous=curr;
     curr=curr->next; 
     i++;  
    }
    previous->next=curr->next;
    ptr=curr->next;
    ptr->prev=previous;
    free(curr);
    return start;
}

int main(){
    struct node *start,*head;
    head=(struct node*)malloc(sizeof(struct node));   
    start=head;
    int n=7;
    while(n!=5){
    printf("Enter the operation you want \n");
    printf("1.Creation\n2.Traversal\n3.Insertion at last\n4.Deletion at a location\n5.Exit\n");
    scanf("%d",&n);
    if(n==1){
        creation(head);
        }
    else if(n==2){
        traversal(head);
        }
    else if(n==3){
        start=insertion_last(start);
        traversal(start);
        }
    else if(n==4)
        {
        start=deletion(start);
        traversal(start);
        }
    else if(n==5){
        printf("Thank You\nBye-Bye");
        return 0;
    }
    else{
        printf("Invalid operation ");
    }
    }
return 0;
}