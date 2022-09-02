#include <stdio.h>
struct student{
    char name[30];
    float cgpa;
}s[3];
void disp(struct student s[]){
    printf("Student with cgpa greater than 9.8 :\n");
    for(int i=0; i<5;i++){
    if(s[i].cgpa>9.8){
        printf("The student name is %s and cgpa is %.2f \n",s[i].name,s[i].cgpa);
        
    }
   
}
}
int main(){
    for(int i=0;i<5;i++){
        printf("Enter info for student no %d\n",i+1);
        printf("Enter name and cgpa\n");
        scanf("%s%f",s[i].name,&s[i].cgpa);
    }
    printf("\n");
    disp(s);
    
}