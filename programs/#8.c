//8. Program to accept two number and print largest among them.

#include<stdio.h>

void main()
{
  int a,b;

  printf("Enter 1st number : ");
  scanf("%d",&a);

  printf("Enter 2nd number : ");
  scanf("%d",&b);

  if(a>b)
    printf("Largest value is : %d",a);
  else
    printf("Largest value is : %d",b);

}
