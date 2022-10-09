//representation of a sparse matrix in triplet form
#include <stdio.h>
#include <stdlib.h>
int main(){
    int row,column;
    printf("Enter the rows and columns:");
    scanf("%d%d",&row,&column);
    int **matrix;
    matrix=(int **)malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
        matrix[i]=(int*)malloc(sizeof(int)*column);
    }
    printf("enter the data in the sparse matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
            scanf("%d",&matrix[i][j]);
        }
    }
 
    printf("The sparse matrix is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    //In triple form
    printf("Enter the number of non zero elemnts ");
    int num;
    scanf("%d",&num);
    int tripmat[num][3];
    
    int k=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]!=0){
                tripmat[k][0]=i+1;
                tripmat[k][1]=j+1;
                tripmat[k][2]=matrix[i][j];
                k++;
            }
        }
    }

    //print triplet matrix
    printf("The triplet rep is :\n");
    printf("rows:%d\tcolumn:%d\tvalue\n",row,column);
    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            
            printf("%d\t\t",tripmat[i][j]);
        }
        printf("\n");
    }
}