//addition of two variable polynomial
#include <stdio.h>
struct polynomial{
    int expo_x;
    int expo_y;
    int arr[10][10];
};
void display(struct polynomial poly){
    printf("The polynomial is :\n");
    for(int i=0;i<=poly.expo_x;i++){
        for(int j=0;j<=poly.expo_y;j++){
            printf("%dx^%dy^%d",poly.arr[i][j],i,j);
            if(i==poly.expo_x && j==poly.expo_y)continue;
            printf(" + ");
        }
    }
    printf("\n");
}
void create(struct polynomial *poly){
    printf("Enter the coefficients: \n");
      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            poly->arr[i][j]=0;
        }
    }
    for(int i=0;i<=poly->expo_x;i++){
        for(int j=0;j<=poly->expo_y;j++){
            printf("coefficient of x^%dy^%d= ",i,j);
            scanf("%d",&poly->arr[i][j]);
        }
    }
}
void add(struct polynomial poly1,struct polynomial poly2,struct polynomial *poly3){
    poly3->expo_x=(poly1.expo_x>poly2.expo_x)?poly1.expo_x:poly2.expo_x;
    poly3->expo_y=(poly1.expo_y>poly2.expo_y)?poly1.expo_y:poly2.expo_y;
    for(int i=0;i<=poly3->expo_x;i++){
        for(int j=0;j<=poly3->expo_y;j++){
            poly3->arr[i][j]=poly1.arr[i][j]+poly2.arr[i][j];
        }
    }

}
int main(){
    struct polynomial poly1,poly2,poly3;
    printf("Enter the exponents of x and y for the first polynomial: \n");
    scanf("%d%d",&poly1.expo_x,&poly1.expo_y);
    create(&poly1);
    display(poly1);
    printf("Enter the exponents of x and y for the second polynomial: \n");
    scanf("%d%d",&poly2.expo_x,&poly2.expo_y);
    create(&poly2);
    display(poly2);
    add(poly1,poly2,&poly3);
    printf("After addition :\n");
    display(poly3);
    return 0;
}