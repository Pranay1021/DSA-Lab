//merging two linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
void display(struct node *start1);
void create(struct node *ptr){
    int n;
    printf("Enter the info in the linked list :\n");
    scanf("%d",&ptr->info);
    printf("Press 0 to exit any other number to continue :\n");
    scanf("%d",&n);
    ptr->next=malloc(sizeof(struct node));
    ptr=ptr->next;
    while(n!=0){
        ptr->next=malloc(sizeof(struct node));
        printf("Enter the info of the linked list :\n");
        scanf("%d",&ptr->info);
        ptr=ptr->next;
        printf("Press 0 to exit any other number to continue :\n");
        scanf("%d",&n);
    }
    ptr->next=NULL;   
}
void display(struct node *start1){
    printf("\n");
    while(start1->next!=NULL){
        printf("%d ",start1->info);
        start1=start1->next;
    }
    printf("\n");
}
void merge( struct node *start1, struct node *start2){
    struct node *ptr3;
    ptr3=start1;
    while(start1->next->next!=NULL){
        start1=start1->next;
    }
    start1->next=start2;
    printf("The merged list is :\n");
    display(ptr3);
}
int main(){
    struct node *start1,*head1,*start2,*head2;
    head1=(struct node *)malloc(sizeof(struct node) );
    head2=(struct node *)malloc(sizeof(struct node));
    start1=head1;
    start2=head2;
    printf("For the first list:\n");
    create(head1);
    display(head1);
    printf("For the second list :\n");
    create(head2);
    display(head2);
    merge(head1,head2);
    return 0;
}