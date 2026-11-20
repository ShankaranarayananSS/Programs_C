//Area of Rectangle      = Length * Breadth
//Perimeter of Rectangle = 2 * (Length + Breadth)

#include<stdio.h>
int main(){
  int l,b;
  printf("Enter Length of a Rectangle:");
  scanf("%d",&l);
  printf("Enter Breadth of a Rectangle:");
  scanf("%d",&b);
  
  printf("\nArea of Rectangle = %d",(l*b));
  printf("\nPerimeter of Rectangle = %d",2*(l+b));
  return 0;
}
