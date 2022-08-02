//menu of operatoin in an array
#include <stdio.h>
#include <stdlib.h>

void display(int arr[],int *a){
    printf("The data in your array is:\n");
    for(int i=0;i<*a;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insert(int *arr,int *a){
    int data,pos;
    printf("Enter the data to be inserted:\n");
    scanf("%d",&data);
    printf("Enter the position :\n");
    scanf("%d",&pos);
    *a=*a+1;
    for(int i=*a;i>pos-1;i--){
       arr[i]=arr[i-1];
    }
    arr[pos-1]=data;
    display(arr,a);

}
void delete(int *arr,int *a){
    int b;
    printf("Enter the position of the data to be deleted :");
    scanf("%d",&b);
    for(int i=b-1;i<*a;i++){
        arr[i]=arr[i+1];
    }
    *a=*a-1;
    display(arr,a);

}
int main(){
    int a,n;
    int*b=&n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter the data in the array \n");
    int *arr=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    x:
    printf("\n Enter the number for the operation :\n\n");
    printf(" 1.Display the content of the array\n\n 2.Insertion at a position\n\n 3.Deletion at a position \n\n 4.Exit \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        display(arr,b);
        goto x;
        break;
    
    case 2:
        insert(arr,b);
        goto x;
        break;
    case 3:
        delete(arr,b);
        goto x;
        break;

    case 4:
        return 0;
    default:
        printf("No operation available :");
        goto x;
        break;
    }
}