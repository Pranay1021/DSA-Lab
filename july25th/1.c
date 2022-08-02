//info of employee qno1

#include <stdio.h>
struct employee{
    int empid;
    char name[30];
    int age;
    int salary;

}emp;
int main(){
printf("Enter Employee id");
scanf("%d",&emp.empid);  
printf("Enter Employee name");
scanf("%s",emp.name);
printf("Enter Employee age and Salary");
scanf("%d%d",&emp.age,&emp.salary);

printf("The employee id is %d,name %s ,age %d and salary %d",emp.empid,emp.name,emp.age,emp.salary);
}