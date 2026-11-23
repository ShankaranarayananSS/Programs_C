//Swap Two Numbers

#include<stdio.h>
int main(){
  int n1,n2,temp;
  printf("Enter number-1:");
  scanf("%d",&n1);
  printf("Enter number-2:");
  scanf("%d",&n2);
  
  printf("\nBefore Swap: %d and %d",n1,n2);
  temp = n1;
  n1 = n2;
  n2 = temp;
  printf("\nAfter Swap: %d and %d",n1,n2);
  return 0;
}
