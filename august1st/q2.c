//second largest number
#include <stdio.h>
#include <stdlib.h>
void second(int *p,int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i]<p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("The second largest element in the list is %d",p[1]);
}
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(sizeof(int)*n);
    printf("Enter %d data :",n);
    for(int i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    second(a,n);
    return 0;
}