//Display Memory Address using Single Pointer and Double Pointer

#include<stdio.h>
int main(){
  int num, *p1=&num, **p2=&p1;
  printf("Enter number:");
  scanf("%d",&num);
  
  printf("\nThe number = %d",num);
  printf("\nThe address of the number = %p",p1);
  printf("\nThe address of the address = %p",p2);
  return 0;
}
