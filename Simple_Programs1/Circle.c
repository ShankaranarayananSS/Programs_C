//Area of Circle          = 3.14 * Radius * Radius
//Circumference of Circle = 2 * 3.14 * Radius

#include<stdio.h>
int main(){
  float r;
  printf("Enter Radius of a Circle:");
  scanf("%f",&r);
  
  printf("\nArea of Circle = %.2f",(3.14*r*r));
  printf("\nCircumference of Circle = %.2f",(2*3.14*r));
  return 0;
}
