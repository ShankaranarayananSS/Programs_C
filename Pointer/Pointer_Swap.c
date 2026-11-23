//Swap Two Numbers using Pointer

#include<stdio.h>
int main(){
  int n1,n2, *p1=&n1, *p2=&n2, *temp;
  printf("Enter number-1:");
  scanf("%d",&n1);
  printf("Enter number-2:");
  scanf("%d",&n2);
  
  printf("\nBefore Swap: %d and %d",*p1, *p2);
  temp = p1;
  p1 = p2;
  p2 = temp;
  printf("\nAfter Swap: %d and %d",*p1, *p2);
  return 0;
}
