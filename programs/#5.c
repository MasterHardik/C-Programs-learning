//5. Program to accept value of radius and print area of a circle.

#include<stdio.h>

void main()
{
  float area,radius;

  printf("Enter Radius:");
  scanf("%f",&radius);

  area=3.14*radius*radius;

  printf("Area : %6.2f",area);

}
