//Area of Square       = Side * Side
//Perimeter of Square  = 4 * Side

#include<stdio.h>
int main(){
  int side;
  printf("Enter Side of Square:");
  scanf("%d",&side);
  
  printf("\nArea of Square = %d",(side*side));
  printf("\nPerimeter of Square = %d",(4*side));
  return 0;
}
