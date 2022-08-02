//info of employee with max salary

#include <stdio.h>

struct employee{
    int empid;
    char name[30];
    int age;
    int salary;

}emp[5];
int max(struct employee s[],int n){
    int ans=0;
    for(int i=1;i<n;i++){
       if(s[i].salary>s[ans].salary){
        ans=i;
       }
        
    }
    return ans;
}
int main(){
for(int i=0;i<5;i++){
printf("Employee no %d\n",i+1);
printf("Enter Employee id ");
scanf("%d",&emp[i].empid);  
printf("Enter Employee name ");
scanf("%s",emp[i].name);
printf("Enter Employee age and Salary ");
scanf("%d%d",&emp[i].age,&emp[i].salary);
}
int max_salary=max(emp,5);


printf("The employee with maximum salary is:\n id %d\nname %s \nage %d and salary %d",emp[max_salary].empid,emp[max_salary].name,emp[max_salary
].age,emp[max_salary].salary);
}
