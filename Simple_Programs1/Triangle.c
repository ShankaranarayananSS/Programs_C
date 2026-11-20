//Area of Right Angle Triangle = 1/2 * Base * Height

#include<stdio.h>
int main(){
  float b,h;
  printf("Enter Base of a Triangle:");
  scanf("%f",&b);
  printf("Enter Height of a Triangle:");
  scanf("%f",&h);
  
  printf("Area of Right Angle Triangle = %.2f",(0.5*b*h));
  return 0;
}
