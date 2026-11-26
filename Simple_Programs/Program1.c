//Data Types - Display Student Details

#include<stdio.h>
int main(){
  int roll = 101;
  float mark = 95.5;
  char grade = 'O';
  char name[10] = "Shana";
  
  printf("\nName = %s",name);
  printf("\nRoll No = %d",roll);
  printf("\nPercentage = %.2f",mark);
  printf("\nGrade = %c",grade);
  return 0;
}
