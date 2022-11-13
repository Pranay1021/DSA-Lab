//Insertion sort
#include <stdio.h>
void insertSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>-1 && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the data in the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);        
    }
    insertSort(arr,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


}