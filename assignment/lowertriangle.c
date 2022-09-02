//print lower triangle
#include <stdio.h>
#include <stdlib.h>
int main(){
    int r,c;
    //input matrix
    printf("Enter row and column of the matrix:\n");
    scanf("%d%d",&r,&c);
    int **arr=(int **)malloc(sizeof(int *)*r);
    for(int i=0;i<r;i++){
        arr[i]=(int*) malloc(sizeof(int)*c);
    }
    printf("Enter the data of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
//display matrix
    printf("The matrix is :\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The lower triangle is :\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}