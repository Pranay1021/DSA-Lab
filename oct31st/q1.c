//binary tree using linked list
#include <stdio.h>
#include <stdlib.h>
struct tree{
    int data;
    struct tree *right;
    struct tree *left;
};
struct tree * create(){
    struct tree *btree=malloc(sizeof(struct tree));
    int q;
    printf("Enter the data or -1 to not add any node :\n");
    scanf("%d",&q);
    if(q==-1){
        return NULL;
    }
    else{
        btree->data=q;
    }
    printf("Enter left child of the node %d:\n",q);
    btree->left=create();
    printf("Enter right child of the node %d:\n",q);
    btree->right=create();

    return btree;
}
void display(struct tree *disp){
    if(disp==NULL){
        return;
    }
    display(disp->left);
    printf("%d ",disp->data);
    display(disp->right);
}
void insert(struct tree *p){
int num;
printf("Enter the data:");
scanf("%d",&num);
int n;
printf("Enter 1 to add to left node or 2 to add in right :\n");
scanf("%d",&n);
if(n==1){
    while(p->left!=NULL){
    p=p->left;
    }
    struct tree *new=malloc(sizeof(struct tree));
    new->data=num;
    new->left=NULL;
    new->right=NULL;
    p->left=new;  
}
else{
    while(p->right!=NULL){
    p=p->right;
    }
    struct tree *new=malloc(sizeof(struct tree));
    new->data=num;
    new->left=NULL;
    new->right=NULL;
    p->right=new;
    }
}
int main(){
    struct tree *btree=malloc(sizeof(struct tree));
    int n;
    while(n!=4){
        printf("\nEnter the operation you want\n1.create\n2.Insertion\n3.Display\n4.Exit\n");
        scanf("%d",&n);
    if(n==1){
    btree=create();
    }
    else if (n==2){
        insert(btree);
    }
    else if(n==3){
        display(btree);
    }
    else if(n==4){
        printf("Exit");
        return 0;
    }
    else{
        printf("Invalid operation");
    }
    }
}