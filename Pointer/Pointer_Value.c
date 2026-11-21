//Display Value using Pointer

#include<stdio.h>
int main(){
  int num, *pointer=&num;
  printf("Enter number:");
  scanf("%d",&num);
  
  printf("\nNumber using Variable = %d",num);
  printf("\nNumber using Reference = %d",*pointer);
  return 0;
}
