#include<stdio.h>
struct employee{
  int id;
  char name[10], role[50];
  float salary;
};
int main(){
  struct employee e;
  printf("Enter Employee ID:");
  scanf("%d",&e.id);
  printf("Enter Employee Name:");
  scanf("%s",&e.name);
  printf("Enter Employee Role:");
  scanf("%s",&e.role);
  printf("Enter Employee Salary:");
  scanf("%f",&e.salary);
  
  printf("\nID = %d",e.id);
  printf("\nName = %s",e.name);
  printf("\nRole = %s",e.role);
  printf("\nSalary = %.2f",e.salary);
  return 0;
}
