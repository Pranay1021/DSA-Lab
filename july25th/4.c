//minimum distance 
#include <stdio.h>
#include <stdlib.h>
void min(int *num, int size,int a,int b){
    int i,j,diff=0,min;
    for(i=0;i<size;i++){
        if(num[i]==a){
            for(j=i+1;j<size;j++){
                if(num[j]==b){
                    min=abs(i-j);
                    break;
                }
            }
        }
    else{
        continue;
    }
        }
        
    
printf("the minimum distance is %d",min);
}
int main(){
    int i,j,size,x,y;
    printf("enter size of array");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++){
        printf("enter the data \n");
        scanf("%d",&array[i]);
    }
    printf("Enter two number from the list");
    scanf("%d%d",&x,&y);
    min(array,size,x,y);
}
