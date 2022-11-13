//Selection Sort
#include <stdio.h>
void selectSort(int arr[],int n){
    int i,j,pos,large;
    for(i=n-1;i>0;i--){
        pos=0;
        large=arr[0];
        for(j=1;j<=i;j++){
            if(arr[j] > large){
                large=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=large;    
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
    selectSort(arr,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}