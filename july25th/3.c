//book shop
#include <stdio.h>
int index=0;
struct book{
    int bookno;
    char title[30];  
    int price;
}b[5];
int maxprice(struct book b1[]){
    int max=b[0].price;
    for(int i=0;i<5;i++){
       
            if(b[i].price>max){
                max=b[i].price;
                index=i;
            }
        
    }
    return max;
}
int main(){
     int i;
    for(i=0; i<5; i++){
        printf("Enter the bookno: ");
        scanf("%d", &b[i].bookno);
        printf("Enter the title: ");
        scanf("%s", b[i].title);
        printf("Enter the price: ");
        scanf("%d", &b[i].price);
    }
    int max_price=maxprice(b);

    printf("The max price is %d\n the book number is %d and title is %s",max_price,b[index].bookno,b[index].title);
}