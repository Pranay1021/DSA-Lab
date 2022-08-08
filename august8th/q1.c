//menu driven operations on polynomial
#include <stdio.h>
#include <stdlib.h>

struct polynomial{
    int expo;
    int coeff[10];
};
int max(int a,int b){
    int c=(a>b)?a:b;
    return c;
}
void display(struct polynomial p1,int n){
    int i;
    printf("The polynomial %d is:\n",n);
    for(i=0;i<=p1.expo;i++){
        printf("The coefficient of x^%d is %d\n",i,p1.coeff[i]);
    }
}
void addition(struct polynomial p1,struct polynomial p2,struct polynomial *p3){
    int i;
    p3->expo=max(p1.expo,p2.expo);
    for(i=0;i<=p3->expo;i++){
        p3->coeff[i]=p1.coeff[i]+p2.coeff[i];
    }
    display(*p3,3);
}
void multiplication(struct polynomial p1,struct polynomial p2,struct polynomial p4){
    int i,j,k;
    p4.expo=p1.expo+p2.expo;

    for(i=0;i<=p1.expo;i++){
        for(j=0;j<=p2.expo;j++){
            p4.coeff[i+j] += (p1.coeff[i])*(p2.coeff[j]);
        }
    }
    display(p4,4);
}
void insert(struct polynomial *p1,struct polynomial *p2){
    printf("Input the exponent of the polynomial 1:\n");
    scanf("%d",&p1->expo);
    printf("Enter the coefficients :\n");
    for(int i=0;i<=p1->expo;i++){
        scanf("%d",&p1->coeff[i]);
    }
    
    printf("\nInput the exponent of the polynomial 2:\n");
    scanf("%d",&p2->expo);
    printf("Enter the coefficients :\n");
    for(int i=0;i<=p2->expo;i++){
        scanf("%d",&p2->coeff[i]);
    }
}
int main(){
    struct polynomial p1;
    struct polynomial p2;
    struct polynomial p3;
    struct polynomial *p4;
    p4=(struct polynomial*)calloc(10,sizeof(int));
    int op,n;   
    x:
    printf("\nEnter the operation number you want:\n");
    printf("1.Insertion of values\n2.Displaying th evalues\n3.Addition of two polynomials\n4.Multiplying two polynomials\n5.Exit\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        insert(&p1,&p2);
        goto x;
        break;
    case 2:
        display(p1,1);
        display(p2,2);
        goto x;
        break;
    case 3:
         addition(p1,p2,&p3);
         goto x;
         break;
    case 4:
        multiplication(p1,p2,*p4);
        goto x;
        break;
    case 5:
        printf("Bye Bye");
        return 0;
    default:
        printf("Invalid Operaton \nTry again");
        goto x;
        break;
        
    }
}