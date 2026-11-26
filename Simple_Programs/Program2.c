//Data Types - Obtain and Display Student Details

#include<stdio.h>
int main(){
  int roll;
  float mark;
  char grade, name[10];
  
  printf("Enter name:");
  scanf("%s",&name);
  printf("Enter roll no:");
  scanf("%d",&roll);
  printf("Enter percentage:");
  scanf("%f",&mark);
  printf("Enter grade:");
  scanf(" %c",&grade);
  
  printf("\nName = %s",name);
  printf("\nRoll No = %d",roll);
  printf("\nPercentage = %.2f",mark);
  printf("\nGrade = %c",grade);
  return 0;
}
