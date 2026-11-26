#include<stdio.h>
struct employee{
  int id;
  char name[10], role[50];
  float salary;
};
int main(){
  struct employee e1 = {101, "Arun", "Front End", 35000};
  struct employee e2 = {102, "Bala", "Front End", 35000};
  struct employee e3 = {201, "Ravi", "Back End", 50000};
  struct employee e4 = {501, "Kumar", "Data Base", 45000};
  struct employee e5 = {502, "Shana", "Data Base", 45000};
  
  printf("ID\tName\tDesignation\tSalary\n");
  printf("%d\t%s\t%s\t%.2f\n", e1.id, e1.name, e1.role, e1.salary);
  printf("%d\t%s\t%s\t%.2f\n", e2.id, e2.name, e2.role, e2.salary);
  printf("%d\t%s\t%s\t%.2f\n", e3.id, e3.name, e3.role, e3.salary);
  printf("%d\t%s\t%s\t%.2f\n", e4.id, e4.name, e4.role, e4.salary);
  printf("%d\t%s\t%s\t%.2f\n", e5.id, e5.name, e5.role, e5.salary);
  return 0;
}
