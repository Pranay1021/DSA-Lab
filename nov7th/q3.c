//WAP to merge sort
#include <stdio.h>
void mergeSort(int arr[],int n){
    if(n>1){
        int mid=n/2;
        int left[mid];
        int right[n-mid];
        for(int i=0;i<mid;i++){
            left[i]=arr[i];
        }
        for(int i=mid;i<n;i++){
            right[i-mid]=arr[i];
        }
        mergeSort(left,mid);
        mergeSort(right,n-mid);
        int i=0,j=0,k=0;
        while(i < mid && j < n-mid){
            if(left [i] < right [j]){
                arr[k]=left[i];
                i++;
            }
            else{
                arr[k]=right[j];
                j++;
            }
            k++;
        }
        while(i<mid){
            arr[k]=left[i];
            i++;
            k++;
        }
        while(j<n-mid){
            arr[k]=right[j];
            j++;
            k++;
            }
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
    mergeSort(arr,n);
    printf("The sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}