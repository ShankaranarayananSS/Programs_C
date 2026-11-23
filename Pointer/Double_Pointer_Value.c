//Display Value using Single Pointer and Double Pointer

#include<stdio.h>
int main(){
  int num, *p1=&num, **p2=&p1;
  printf("Enter number:");
  scanf("%d",&num);
  
  printf("\nNumber using Variable = %d",num);
  printf("\nNumber using Pointer = %d",*p1);
  printf("\nNumber using Double Pointer = %d",**p2);
  return 0;
}
