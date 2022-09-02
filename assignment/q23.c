#include <stdio.h>
#include <string.h>
struct student{
    char name[30];
    int cgpa;
}s[5];
int search_stud(struct student sp[],char x[]){
    for(int i=0;i<5;i++){
   if(strcmp(x,sp[i].name)==0){
    return i;
   }  
   else{
    continue;
   }
   }
   printf("The name wasn't found");
}
int main(){    
    char search[30];
    for(int i=0;i<5;i++){
        printf("Enter the name and cgpa of student :\n");
        printf("Student no %d :",i+1);
        scanf("%s%d",s[i].name,&s[i].cgpa);
    }
    printf("Enter the name you want to search :\n");
    scanf("%s",&search);
    int ans=search_stud(s,search);
    printf("The student info you searched for is: \n");
    printf("student name :%s\nstudent cgpa : %d\n",s[ans].name,s[ans].cgpa);
}