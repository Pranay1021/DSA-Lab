//student info
#include <stdio.h>
struct student{
    int rollno;
    char name[30];
    int age;
    float cgpa;

}s[5];
int main(){
    for(int i=0;i<5;i++){
        printf("Enter the roll no");
        scanf("%d",&s[i].rollno);
        printf("Enter the name");
        scanf("%s",s[i].name);
        printf("enter the age");
        scanf("%d",&s[i].age);
        printf("enter the cgpa");
        scanf("%f",&s[i].cgpa);
    }
     for(int i=0; i<5; i++){
        printf("Student rollno: %d\n", s[i].rollno);
        printf("Student name: %s\n", s[i].name);
        printf("Student age: %d\n", s[i].age);
        printf("Student cgpa: %f\n", s[i].cgpa);
    }
}