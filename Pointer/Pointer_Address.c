//Display Memory Address using Pointer

#include<stdio.h>
int main(){
  int num, *pointer=&num;
  printf("Enter number:");
  scanf("%d",&num);
  
  printf("\nThe number = %d",num);
  printf("\nThe address = %p",pointer);
  return 0;
}
