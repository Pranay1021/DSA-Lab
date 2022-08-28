//Addition of two sparese matrix
#include <stdio.h>
void print(int spmat3[][3],int m,int n,int val);
void create(int spmat[][3],int k,int *r,int *c){
    printf("Enter the number of rows and columns:");
    scanf("%d%d",r,c);
    printf("Enter the row columns and data respectively :\n");
    for(int i=0;i<k;i++){
        scanf("%d%d%d",&spmat[i][0],&spmat[i][1],&spmat[i][2]);
        
    }
    print(spmat,*r,*c,k);

}
void add(int spmat1[][3],int spmat2[][3],int k1,int k2,int r3,int c3){
    int spmat3[20][3];
    int p1=0,p2=0,p3=0;
    while(p1<k1 && p2<k2){
     
    if(spmat1[p1][0]==spmat2[p2][0]){
            if(spmat1[p1][1]<spmat2[p2][1]){
            spmat3[p3][0]=spmat1[p1][0];
            spmat3[p3][1]=spmat1[p1][1];
            spmat3[p3][2]=spmat1[p1][2];
            p1++;
            p3++;
            
        }
        else if(spmat1[p1][1]>spmat2[p2][1]){
            spmat3[p3][0]=spmat2[p2][0];
            spmat3[p3][1]=spmat2[p2][1];
            spmat3[p3][2]=spmat2[p2][2];
            p2++;
            p3++;
            
        }
        else if(spmat1[p1][1]==spmat2[p2][1]){
            spmat3[p3][0]=spmat1[p1][0];
            spmat3[p3][1]=spmat1[p1][1];
            spmat3[p3][2]=spmat1[p1][2]+spmat2[p2][2];
            p1++;
            p2++;
            p3++;
           
        }
     }
    else if(spmat1[p1][0]>spmat2[p2][0]){
        spmat3[p3][0]=spmat2[p2][0];
        spmat3[p3][1]=spmat2[p2][1];
        spmat3[p3][2]=spmat2[p2][2];
        p3++;
        p2++;
    }
    //  (spmat1[p1][1]<spmat2[p2][1]){
       else{ spmat3[p3][0]=spmat1[p1][0];
        spmat3[p3][1]=spmat1[p1][1];
        spmat3[p3][2]=spmat1[p1][2];
        p1++;
        p3++;
        }
    
    }
    while(p1<k1){
            spmat3[p3][0]=spmat1[p1][0];
            spmat3[p3][1]=spmat1[p1][1];
            spmat3[p3][2]=spmat1[p1][2];
            p1++;
            p3++;
    }
    while(p2<k2){
            spmat3[p3][0]=spmat2[p2][0];
            spmat3[p3][1]=spmat2[p2][1];
            spmat3[p3][2]=spmat2[p2][2];
            p2++;
            p3++;
    }
    printf("After addition:\n");
    print(spmat3,r3,c3,p3);
}
void print(int spmat3[][3],int m,int n,int val){
    printf("\nThe sparse matrix is:\n");
    printf("rows:%d\tcolumn:%d value:%d\n",m,n,val);
    for(int i=0;i<val;i++){
        for(int j=0;j<3;j++){
        printf("%d\t",spmat3[i][j]);
    }
    printf("\n");
    }
}
int main(){
    int k1,k2,r1,r2,c1,c2,r3,c3;
    printf("Enter the number of non zero element in 1st array :");
    scanf("%d",&k1);
    int spmat1[k1+1][3];
    create(spmat1,k1,&r1,&c1);
    printf("Enter the number of non zero element in 2nd array :");
    scanf("%d",&k2);
    int spmat2[k2+1][3];
    create(spmat2,k2,&r2,&c2);
    if(r1!=r2 || c1!=c2){
        printf("Order mismatch cannot be added.");
        return 0;
    }
    int k3;
    k3=(k1>k2)?k1:k2;
    c3=(c1>c2)?c1:c2;
    r3=(r1>r2)?r1:r2;
    
    add(spmat1,spmat2,k1,k2,r3,c3);
    return 0;
}